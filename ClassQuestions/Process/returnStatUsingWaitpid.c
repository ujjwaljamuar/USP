#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
int main(int argc,char *argv[])

{
	pid_t cpid,w;
	int status;
	cpid=fork();
	if(cpid==-1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
}
if(cpid==0)
{
	printf("child pid is %ld\n",(long)getpid());
	sleep(60);

//if(argc==1)
   //pause();
   exit(0);
   }
   else{
   	do
   	{
	   w=waitpid(cpid,&status,WUNTRACED|WCONTINUED);
	   if(w == -1)
	   {
		   perror("waitpid");
		   exit(EXIT_FAILURE);
	   }
	   if(WIFEXITED(status))
	   {
	   	printf("normally exited,status = %d\n",WEXITSTATUS(status));
	   }
	   else if(WIFSIGNALED(status))
	   {
	   	printf("killed by signal = %d\n",WTERMSIG(status));
	   }
	   else if(WIFSTOPPED(status))
	   {
	   	printf("stopped by signal = %d\n",WSTOPSIG(status));
	   }
	    else if(WIFCONTINUED(status))
	   {
	   	printf("stopped process is now continueing\n");
   	}
   }
   while(!WIFEXITED(status)&& !WIFSIGNALED(status));
   exit(EXIT_SUCCESS);
   	}
   }

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	
	pid_t childpid;
	childpid = fork();
	if(childpid == -1){
		perror("Failed to fork \n");
		return 1; 
		}
	if (childpid == 0)
	{
	printf ("child process %ld\n",(long)getpid());
	  
	}
	
	else
	{
	printf ("In parent process %ld \n",(long)getpid());
	}

return 0;

}

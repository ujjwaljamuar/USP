#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
int i;
pid_t pid;
for(i = 0;i<5;i++){
pid = fork();
printf("%d I am process %ld and my parent process is  %ld \n",i,(long)getpid(),(long)getppid());
}

return 0;
}

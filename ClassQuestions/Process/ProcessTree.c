#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int main(){
	pid_t fc,sc,tc;
	fc = fork();
	if(fc == 0){
		sc = fork();
		if(sc == 0){
			printf("Process 1 is executed process id - %ld \n",(long)getpid());
			}
		else{
			wait(NULL);
			printf("Process 2 is executed process id - %ld \n",(long)getpid());
		}
	}
	else{
		wait(NULL);
		tc = fork();
		if(tc == 0){
			printf("Process 3 is executed process id - %ld \n",(long)getpid());
		}
		else{
			wait(NULL);
			printf("Process 4 is executed process id - %ld \n",(long)getpid());
			}
		}
	return 0;
	}

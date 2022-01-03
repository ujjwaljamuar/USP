// write a c program where a parent process checks whether the given no. is even or ordd and the child process will check whether the child process checks it is a prime or not and in both cases print process id and parent process id.

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void evenodd(int x){
	if(x % 2 == 0)
			printf("x is Even ,  \n");
			
	else
			printf("x is ODD ");

}
void isPrime(int x){
	if( x  <=  1)
			printf("Not prime \n");
	if(x  <= 3)
		printf("Prime \n");
		
	if(x % 2 == 0 || x%3 == 0)
		printf("Not prime \n");
		
	for(int i = 5; i*i <= x ; i+=6){
		if(x % i == 0 || x %(i+2) == 0)
			printf("Not prime \n");
			}
	printf("Prime \n");
}
int main(){
	
	int x = 5;
	
	pid_t childpid;
	
	childpid = fork();
	if (childpid == 0){
		isPrime(x);
		printf("Parent %ld , child %ld \n",(long)getppid(),(long)getpid());
		
			}
	if (childpid == -1){
		perror("Failed to fork \n");
		return 1; 
			}
	else{
		evenodd(x);
		printf("Parent %ld , child %ld \n",(long)getppid(),(long)getpid());
			
		}
	
	
	return 0;
	}


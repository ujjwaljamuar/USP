/* write a program in which the parent process will take an integer and reverse it and the child will print sum of the digits */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void reverse(int x){
    int rev = 0, remainder;
    while (x != 0) {
        remainder = x % 10;
        rev = rev * 10 + remainder;
        x /= 10;
    }
    printf("Reversed number = %d  \n", rev);
}

void sum(int x){
	int sum=0,m;    
	   
	while(x>0)    
	{    
	m=x%10;    
	sum=sum+m;    
	x=x/10;    
	}    
	printf("Sum is=%d \n",sum);    
}
int main(){
	pid_t childpid;
	int x = 745;
	childpid = fork();
	if (childpid == 0){
		sum(x);
		printf("I am child process and my process ID is %ld \n",(long)getpid());		
		}
	if (childpid == -1){
		perror("Failed to fork \n");
		return 1; 
		}
	else{
		reverse(x);	
		printf("I am Parent process and my process ID is %ld \n",(long)getpid());		
		}
	return 0;
	}

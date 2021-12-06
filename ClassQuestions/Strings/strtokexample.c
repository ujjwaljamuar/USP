#include <stdio.h>
#include <string.h>

void main(){
	char str[] = "Hi, my name is Ujjwal Jamuar";
	char *token = strtok(str," ");
	
	while(token != NULL){
		printf("%s \n",token);
		token = strtok(NULL, " ");
		}
	}

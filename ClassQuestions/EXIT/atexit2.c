#include <stdio.h>
#include <stdlib.h>

void display(){
printf("function exit handler \n");
}

int main(){
	if(atexit(display)){
		fprintf(stderr, " exit error \n");
		return 1;
	}
	for(int i = 0;i<5;i++){
		printf("%d \n",i);
		}
	
	return 0;
	
	}

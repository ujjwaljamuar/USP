#include <stdio.h>
#include <stdlib.h>

void functionA(){
printf("This is functionA \n");
}

int main(){
	atexit(functionA);
	
	printf("Starting main prog... \n");
	printf("Exiting main prog... \n");
	
	return 0;
	
	}

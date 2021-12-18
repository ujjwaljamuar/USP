#include <stdio.h>
#include <string.h>

void main(){
	char s1[] = "Hello : ";
	char s2[] = "Dear Students.";
	
	strcat(s1,s2);
	
	printf("Output of s1 after string concatenation : %s \n",s1);
	
	}

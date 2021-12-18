#include <stdio.h>
#include <string.h>

void main(){
	char s1[] = "Hello : ";
	char s2[] = "Students.";
	
	strncat(s1,s2,1);
	
	printf("Output of s1 after string concatenation : %s \n",s1);
	
	}

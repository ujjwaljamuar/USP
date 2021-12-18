#include <stdio.h>
#include <string.h>

void main(){
	//char s1[] = "hello students let us learn string in C";
	char s1[] = "NULL";
	char s2[] = "Hello Students Let Us Learn String In C";
	
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	printf("String 1 length -> %d \n",size1);
	printf("String 2 length -> %d \n",size2);
	
	strcpy(s1,s2);
	
	printf("before copying s1 - > %s \n" ,s1);
	
	printf("After copying s1 - > %s \n" ,s1);
	
	}

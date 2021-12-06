#include <stdio.h>
#include <string.h>

void main(){
	//char s1[] = "hello students let us learn string in C";
	//char s1[] = "Welcome to USP Lab";
	char s1[] = "Welcome to USP";
	char s2[] = "Lets learn strncpy";
	
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	int n;
	
	printf("Enter the number of bytes you want to enter : \n");
	scanf("%d",&n);
	
	printf("String 1 length -> %d \n",size1);
	printf("String 2 length -> %d \n",size2);
	

	
	printf("before copying s1 -> %s \n" ,s1);
	
	printf("After copying s2 -> %s \n" ,s2);
	
	strncpy(s1,s2,n);
	printf("After copy S1 : %s \n" ,s1);
	
	}

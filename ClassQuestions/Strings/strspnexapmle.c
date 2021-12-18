#include <stdio.h>
#include <string.h>

void main(){
	int len;
	const char str1[] = "ABCDEFG019874";
	const char str2[] = "1987";
	
	len = strspn(str1, str2);
	
	printf("Lenght of initital segment matching characters are : %d \n",len);
}

#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("Enter a string : \n");
	fgets(str,sizeof(str),stdin);
	//scanf("%[^\n]",str);
	
	char *token;
	int c = 0;
	
	char delim[] = "- * _ \n ";
	token = strtok(str,"*,-,_");
	//token = strtok(str,delim);
	
	while(token != NULL){
		printf("Token = %s \n",token);
		token = strtok(NULL,"*,-,_");
		c++;
		}
	printf("tokens = %d \n",c);
	return 0;
}

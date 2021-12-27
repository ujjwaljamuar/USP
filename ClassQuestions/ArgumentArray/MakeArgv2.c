#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char makeargv(char *s,char ***);

int main(){
	char mytest[] = "        This is a test";
	char **myargv;
	int numtokens,i;
	numtokens = makeargv(mytest, &myargv);
	if(numtokens == -1)
		fprintf(stderr, "Failed to construct an argument array . \n");
	else
		for(int i= 0; i < numtokens; i++)
			printf("Myargv[%d] : %s \n",i,myargv[i]);
	return 0;
	
}

int makeargv(char *s,char ***argvp){
	int numtokens = -1,i;
	char *t, *snew;
	*argvp = NULL;
	printf("Original string length = %ld \n",strlen(s));
	
	snew = s+strspn(s," ");
	printf("Skipping leading delimeters (if any) : String Length %ld \n",strlen(snew));
	t = (char *)malloc(sizeof(char)*(strlen(snew) + 1));
	strcpy(t,snew);
	if(strtok(t, " ")!= NULL){
		for(numtokens = 1;strtok(NULL," ") != NULL;numtokens++);
		}
	*argvp = (char **)malloc((numtokens +1)*sizeof(char *));
	strcpy(t,snew);
	**argvp = strtok(t," ");
	for(i = 1;i < numtokens;i++)
		*(*argvp+ i) = strtok(NULL," ");
	*(*argvp + numtokens) = NULL;
	return numtokens;
	
	}

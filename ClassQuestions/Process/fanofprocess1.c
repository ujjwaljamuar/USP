#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
pid_t childpid = 0;
int i,n;
if(argc != 2){
	fprintf(stderr,"Usage: %s processed \n", argv[0]);
	return 1;
	}
n = atoi(argv[1]);           // convert string into integer.
for(i = 1;i<n;i++)
	if((childpid= fork()) <= 0)
		break;
		
fprintf(stderr,"%d :process ID: %ld parent Id: %ld , Child ID: %ld \n",i,(long)getpid(),(long)getppid(),(long)childpid);

return 0;
}

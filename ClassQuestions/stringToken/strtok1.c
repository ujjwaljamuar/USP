#include <stdio.h>
#include <string.h>
int main(){
	char str[] = "ITER-IBCS-SOA-SUM-ids";
	char ptr[] = "iter-ibcs-soa-sum-ids-CSE";
	char *token,*ptoken;
	token = strtok(str,"-");
	ptoken = strtok_r(ptr,"-");  // now internally address is changed to ptr        // it is not thread safe
	while(token != NULL){
		printf("token = %s \n",token);
		token = strtok_r(NULL,"-");
		}
		
	return 0;
	}

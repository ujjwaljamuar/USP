#include <stdio.h>
int main(){
	FILE *inp;
	FILE *outp;
	double item;
	int inputStatus;
	
	inp = fopen("indata.txt","r");
	outp = fopen("outdata1.txt","w");
	
	inputStatus = fscanf(inp , "%lf" , &item);
	int count = 0;
	
	while(inputStatus == 1){
		count++;
		fprintf(outp, "%.2f \n",item);
		inputStatus = fscanf(inp, "%lf",&item);
		}
	fprintf(outp, "Total outputs  = %d",count);
	fclose(inp);
	fclose(outp);
}	
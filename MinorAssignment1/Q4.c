#include <stdio.h>
void main(){
    
    FILE *inp;
    FILE *outp;

    int a,b;

    inp = fopen("Q3input.txt","r");
    outp = fopen("Q3output.txt","w");

    int input = fscanf(inp, "%d %d",&a,&b);

    fprintf(outp, "Before Swap: \na = %d, b = %d \n",a,b);

    a = a^b;
    b = a^b;
    a = a^b;

    fprintf(outp,"After Swap : \na = %d, b = %d",a,b);

    fclose(inp);
    fclose(outp);
}
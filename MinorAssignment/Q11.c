#include <stdio.h>
void main(){
    int m,n,side1,side2,hypotenuse;

    FILE *inp;
    FILE *outp;
    
    inp = fopen("Q11inp.txt","r");
    outp = fopen("Q11out.txt","w");

    fscanf(inp,"%d %d",&m,&n);

    side1 = (m*m) - (n*n);
    side2 = 2*m*n;

    hypotenuse = m*m + n*n;

    fprintf(outp, "side1 = %d, side2 = %d, hypotenuse = %d",side1,side2,hypotenuse);

    fclose(inp);
    fclose(outp);

}
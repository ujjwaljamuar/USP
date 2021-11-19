#include <stdio.h>
#include <math.h>
void split(double num, char sn, int whole, double frac){
    if(num > 0){
        sn = '+';
    }
    else if(num == 0){
        sn = ' ';
    }
    else{
        sn = '-';
    }

    double magnitude = fabs(num);
    whole = floor(magnitude);
    frac = magnitude - whole;

    printf("Sign is %c ,\nInteger part is %d , Fractional part is %lf",sn,whole,frac);
}
int main(){
    double vl;
    char sn;
    int whl;
    double fr;

    printf("Enter a num : \n");
    scanf("%lf",&vl);

    split(vl,sn,whl,fr);

    return 0;
}
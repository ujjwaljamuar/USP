#include <stdio.h>
#include <math.h>
double thirdSideCompute(int a,int b,int deg){
    double rad = (float)deg * ( M_PI / 180.0 );

    double c = sqrt(a*a + b*b - 2*a*b*cos(rad));

    return c;
}
void main(){
    int a,b,deg;
    printf("Enter a , b and degree : \n");
    scanf("%d %d %d",&a,&b,&deg);

    printf("Third side is %lf",thirdSideCompute(a,b,deg));
}
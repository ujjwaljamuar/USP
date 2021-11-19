#include <stdio.h>
void main(){
    double q,K,A,T1,T2,L;
    printf("Enter K,A,T1,T2,L in order : \n");
    scanf("%lf %lf %lf %lf %lf",&K,&A,&T1,&T2,&L);

    q = (K*A*(T2 - T1))/L;

    printf("q = %lf",q);
}
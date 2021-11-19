#include <stdio.h>
#include <math.h>

int main(){
    double a ,b;
    printf("Enter two numbers : \n");
    scanf("%lf %lf",&a,&b);                    // input two numbers

    a = sqrt(a);                              // using sqrt func to evaluate square root
    b = sqrt(b);

    double sum = sqrt(a+b);                          // square root of their sum

    printf("Square root of 1st number is %.3lf \n",a);
    printf("Square root of 2nd number is %.3lf \n",b);
    printf("Square root of their sum is %.3lf \n",sum);
}
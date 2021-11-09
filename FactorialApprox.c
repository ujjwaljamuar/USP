#include <stdio.h>
#include <math.h>
#define PI 3.141592650000000209
int factorial(int n)
{
    double fac = (pow(n, n) * exp(-n)) * sqrt(((1 / 3) + (2 * n)) * PI);
    printf("%lf", fac);

    return 0;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    factorial(n);
}
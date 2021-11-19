#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b;
    printf("Enter a and b : \n");
    scanf("%lf %lf",&a,&b);          //input a and b

    double c = abs(a - b);           // difference and getting absolute value using library func.

    printf("%lf",c);

    
    return 0;
}

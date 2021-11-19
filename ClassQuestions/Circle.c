#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
    double radius,area,circumference;
    
    printf("Enter radius : \n");
    scanf("%lf",&radius);
    
    area = PI*pow(radius,2);
    circumference = 2*PI*radius;
    
    printf("Area of the circle is : %.2lf sq. unit. \n",area);
    printf("Circumference of the circle is : %.2lf unit. ", circumference);
    
    return 0;
}

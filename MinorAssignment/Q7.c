#include <stdio.h>
#define PI 3.14159
void main(){
    double radius,area,length,volume;

    printf("Enter the radius and length of a cylinder: \n");
    scanf("%lf %lf",&radius,&length);

    area = PI * radius * radius;
    volume = area * length;

    printf("The area is %.2lf \nThe volume is %.1lf",area,volume);
}
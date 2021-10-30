#include <stdio.h>
#define PI 3.14159
void Circle(double);
int main(void){
	double radius;
	printf("Enter radius : \n");
	scanf("%lf",&radius);
	Circle(radius);
	return 0;
}
void Circle(double radius){
	double area,circumference;
	
	area = PI*radius*radius;
	circumference = 2 * PI*radius;
	
	printf("Area = %.4lf \n",area);
	printf("Circumference = %.4lf \n",circumference);
	}

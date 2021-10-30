#include <stdio.h>
#define PI 3.14159
double Circle(double);
int main(void){
	double radius,area;
	printf("Enter radius : \n");
	scanf("%lf",&radius);
	
	area = Circle(radius);
	printf("Area = %.5lf \n",area);
	return 0;
}
double Circle(double radius){
	double area;
	
	area = PI*radius*radius;
	
	return area;
	}

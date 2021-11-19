#include <stdio.h>
#define PI 3.141
void Circle(void);
int main(void){
	Circle();
	return 0;
}
void Circle(){
	double radius,area,circumference;
	printf("Enter radius : \n");
	scanf("%lf",&radius);
	
	area = PI*radius*radius;
	circumference = 2 * PI*radius;
	printf("Area = %.4lf \n",area);
	printf("Circumference = %.4lf \n",circumference);
	}

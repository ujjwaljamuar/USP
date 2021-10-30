#include <stdio.h>

#define PI 3.14159
int main(){
	float d1,d2;
	printf("Enter d1 and d2 \n");
	scanf("%f %f \n",&d1,&d2);
	
	float area = (PI*(d2/2)*(d2/2)) - (PI*(d1/2)*(d2/2));
	
	float cost = area * 10.50;
	
	printf("Area of the flat washers %.2f \n",area);
	printf("Cost of shipping = $ %.2f \n",cost);
	
	return 0;
	}

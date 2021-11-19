#include  <stdio.h>

int main(void)
{
    float mi,km;
    printf("Please enter in distance in miles : \n");
    scanf("%f",&mi);
    
    printf("\n");
	
	km = mi * 1.6;                          // 1 mile is equal to 1.6km

	printf("%.2f  Kilometers is equal to %.2f miles.", km,mi);
}
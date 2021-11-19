#include <stdio.h>
#define RATE 0.35
void main(){
    float reading1,reading2,distance;
    printf("\n-------------MILEAGE REIMBURSEMENT CALCULATOR-------------\n\n");

    printf("Enter initial odometer readings : \n");
    scanf("%f",&reading1);

    printf("Enter final odometer readings : \n");
    scanf("%f",&reading2);

    distance = reading2 - reading1;
    printf("You traveled %.1lf. At $ 0.35 per mile,\n",distance);

    printf("Your reimbursement is $ %.2lf.",distance*RATE);
}
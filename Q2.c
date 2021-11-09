#include <stdio.h>
#define GRAV_CONST 9.8
#define EFF 0.9
#define FLOW 1.3

int main(){
    float height,vol;
    printf("Enter the height of the dam : \n");
    scanf("%f",&height);

    printf("Enter the no. of cubic meters of water projected : \n");
    scanf("%f",&vol);


    // POWER = EFFIECIENCY * GRAV_CONSY * HEIGHT OF DAM * FLOW OF WATER * MASS OF 1CUBIC METER WATER
    float power = (EFF * GRAV_CONST * height * FLOW * 1000)/(1000*1000);

    printf("The power generated is %.3f MW .",power);
}
#include <stdio.h>
#include <math.h>
void displaySpeed(double temp){
    double speed;
    speed = 1086 * sqrt((5 * temp + 297) / 247);

    printf("The speed of sound is %.3lf ft/sec.",speed);
}
void main(){
    printf("Enter the temperature of air : ");
    double temp;
    scanf("%lf",&temp);

    displaySpeed(temp);
}
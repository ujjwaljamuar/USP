#include <stdio.h>
#include <math.h>
void main(){
    float depth;
    printf("Enter depth : \n");
    scanf("%f",&depth);

    float celcius = 10*(depth) + 20;
    float fahreheit = 1.8*(celcius) + 32;

    printf("Temperatue in deg celcius is %.2f and in deg fahrenheit is %.2f",celcius,fahreheit);
}
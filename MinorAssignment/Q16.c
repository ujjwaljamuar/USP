#include <stdio.h>
#include <math.h>

double speeds_ratio(double max, double min)
{

    double speed;

    speed = pow((max / min), (1.0 / 5.0));

    return speed;
}

int main(void)
{

    double Max;
    double min;

    printf("Input the max rpm.\n");
    scanf("%lf", &Max);
    printf("Input the min rpm.\n");
    scanf("%lf", &min);

    printf("The ratio between successive speeds of a six-speed gearbox with maximum speed %.1lf rpm,and minimum speed %.1lf rpm, is %.1lf", Max, min, speeds_ratio(Max, min));

    return (0);
}

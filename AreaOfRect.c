#include <stdio.h>
double area(double l, double b)
{
    double area = l * b;
    return area;
}
int main()
{
    double l, b;
    printf("Enter length and breadth : \n");
    scanf("%lf %lf", &l, &b);
    printf("Area = %lf sq. unit.", area(l, b));
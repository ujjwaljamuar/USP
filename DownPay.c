#include <stdio.h>
#include <math.h>
int downpay(int p, int dp, float interest, int payments)
{
    float i = interest / 12;

    printf("Amount borrowed = $ %d \n", (p - dp));

    int pay = (i * (p)) / (1 - pow(1 + i, -payments));

    printf("Monthly payment = $ %d", (pay / payments));

    return 0;
}
int main()
{
    printf("Enter price of the car : $ \n");
    int p;
    scanf("%d", &p);

    int dp;
    printf("Enter down payment : $ \n");
    scanf("%d", &dp);

    printf("Enter interest rate anually : \n");
    float interest;
    scanf("%f", &interest);

    printf("Enter number of payments 36 , 48 or 60 : \n");
    int payments;
    scanf("%d", &payments);

    downpay(p,dp,interest,payments);

    return 0;
}
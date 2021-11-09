#include <stdio.h>

int main()
{
    float start, end;
    printf("-----MILEAGE REIMBURSEMENT CALCULATOR-----  \n");

    printf("Enter beginning odometer readings : \n");
    scanf("%f", &start);

    printf("Enter ending odometer reading : \n");
    scanf("%f", &end);

    float trv = end - start;
    printf("You have travelled %f miles @ $0.35 per mile. \n", trv);

    float cost = trv * 0.35;
    printf("Your reimbursement is $ %.2f .", cost);
}
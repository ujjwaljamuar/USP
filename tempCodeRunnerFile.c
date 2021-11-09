#include <stdio.h>
#define DEMAND_CHARGE 35;
#define LATE_CHARGE 2;
void bill()
{
    double reading1;   // previous month unit
    double reading2;   // current month unit
    double unit;       // unit consumped
    printf("Enter previous month reading : ");
    scanf("%lf", &reading1);

    printf("Enter current meter reading : ");
    scanf("%lf", &reading2);

    unit = reading2 - reading1;

    printf("Enter unpaid balance : $ ");
    float unpaid;
    scanf("%f", &unpaid);

    double charge;
    if (unpaid == 0)
    {
        charge = (unit * 1.10) + DEMAND_CHARGE;
        printf("Water bill is $ %.2lf \n", charge);
    }
    else
    {
        charge = (unit * 1.10) + DEMAND_CHARGE + LATE_CHARGE + unpaid;
        printf("Bill includes unpaid late fees of $ 2 along with the unpaid charge, Your Water bill is $ %.2lf. \n", charge);
    }
}
void main()
{
    printf("The water bill includes a demand charge of $ 35 and $1.10 per 1000 gallons used, \nA $ 2.00 charge is added to the bill along with the unpaid charge. \n \n");
    bill();
}
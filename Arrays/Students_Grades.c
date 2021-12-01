#include <stdio.h>
#define SIZE 5
void main()
{
    int Reg[SIZE], i;
    float sgpa[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        printf("Enter Registration no. and sgpa for student %d : \n", i);
        scanf("%d %f", &Reg[i], &sgpa[i]);
    }

    printf("\n");

    printf("S.No.    Regd No.   SGPA \n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d         %d       %.1f\n", i, Reg[i], sgpa[i]);
    }
}
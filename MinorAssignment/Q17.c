#include <stdio.h>
void main()
{
    int x;
    printf("Enter an integer : \n");
    scanf("%d", &x);

    bool and, or, both;

    if (x % 5 == 0 && x % 6 == 0)
        and = 0;
    else
        and = 1;

    if (x % 5 == 0 || x % 6 == 0)
        or = 1;
    else
        or = 0;

    if (and == 0 && or == 1)
        both = 1;
    else
        both = 0;

    printf("Is %d divisible by 5 and 6? %s",x,and);
    printf("Is %d divisible by 5 or 6? %s",x,or);
    printf("Is %d divisible by 5 or 6, but not both? %s",x,both);
}
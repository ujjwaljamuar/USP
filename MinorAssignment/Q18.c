#include <stdio.h>
void main()
{
    int i = 1;
    int j;
    printf("Enter no. of times : \n");
    scanf("%d", &j);
    char str[10];
    printf("Enter a string of 5 letters : \n");
    scanf("%s", &str);

    printf("\n");

    while (i <= j)
    {
        if (i % 10 == 1 || i % 100 == 1)
        {
            printf("%dst %s\n", i, str);
            i++;
        }
        else if (i % 10 == 2 || i % 100 == 2)
        {
            printf("%dnd %s\n", i, str);
            i++;
        }
        else if (i % 10 == 3 || i % 100 == 3)
        {
            printf("%drd %s\n", i, str);
            i++;
        }
        else
        {
            printf("%dth %s\n", i, str);
            i++;
        }
    }
}
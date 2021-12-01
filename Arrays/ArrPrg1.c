#include <stdio.h>
#define SIZE 5
void main()
{
    int primeNo[SIZE], i;
    char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    printf("Enter five prime no. : \n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &primeNo[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("Prime no. at position %d is : %d \n", i, primeNo[i]);
        printf("Vowel at position %d is %c \n\n",i,vowels[i]);
    }
}


#include <stdio.h>
#define SIZE 1

/*struct studentInfo{
char name[30];
int regno;
char sec;
float sgpa;
};   */
typedef struct studentInfo
{
    char name[30];
    int regno;
    char sec;
    float sgpa;
} classkl;

void main()
{
    classkl student[3];

    printf("Enter name, reg. no., section and sgpa \n");

    for (int i = 0; i < 3; i++)
    {
        scanf(" %s %d %c %f", student[i].name, &student[i].regno, &student[i].sec, &student[i].sgpa);
    }
    for (int i = 0; i < 3; i++)
    {
        printf(" %s %d %c %f \n ", student[i].name, student[i].regno, student[i].sec, student[i].sgpa);
    }
}

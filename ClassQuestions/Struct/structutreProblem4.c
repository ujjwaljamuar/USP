#include <stdio.h>
#define SIZE 1

/*
struct studentInfo{
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
    classkl student;
    classkl *student1;

    student1 = &student;

    printf("Enter name, reg. no., section and sgpa : \n");

    scanf(" %s %d %c %f", student1->name, &student1->regno, &student1->sec, &student1->sgpa);

    printf("%s %d %c %.1f \n", (*student1).name, (*student1).regno, (*student1).sec, (*student1).sgpa);

    // printf(" %s %d %c %.1f \n ",student1->name,student1->regno,student1->sec,student1->sgpa);
}

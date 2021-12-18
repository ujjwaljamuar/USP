#include <stdio.h>
#define SIZE 1

struct studentInfo{
char name[30];
int regno;
char sec;
float sgpa;
};

void main(){
    struct studentInfo student;  // declaring structure variable
    printf("Enter name, reg. no., section and sgpa \n");
    scanf(" %s %d %c %f",student.name,&student.regno,&student.sec,&student.sgpa);
     //no need to pass & for string value
    
    printf("Student's name is %s \n",student.name);
    printf("Student's registration no. is %d \n",student.regno);
    printf("Student's section is %c \n",student.sec);
    printf("Student's SGPA is %.1lf \n",student.sgpa);       
    
}

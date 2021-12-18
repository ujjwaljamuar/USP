#include <stdio.h>
#define SIZE 1

/*struct studentInfo{
char name[30];
int regno;
char sec;
float sgpa;
};   */
typedef struct studentInfo{
char name[30];
int regno;
char sec;
float sgpa;
} classkl;

void main(){
    classkl student;
    
    printf("Enter name, reg. no., section and sgpa \n");
    scanf(" %s %d %c %f",student.name,&student.regno,&student.sec,&student.sgpa);
     //no need to pass & for string value
    
    printf("Student's name is %s \n",student.name);
    printf("Student's registration no. is %d \n",student.regno);
    printf("Student's section is %c \n",student.sec);
    printf("Student's SGPA is %.1lf \n",student.sgpa);       
    
}

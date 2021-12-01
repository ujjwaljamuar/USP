// 1941012631 Ujjwal Jamuar CSE L 5th Sem
// Faculty - Mr. TrilokNath pandey

#include<stdio.h>
int main(){
    float x=8.6;
    float *p1,*p2,*p3;
    p1=&x;
    p2=&x;
    p3=&x;
    printf("%f\n",*p1);
    printf("%f\n",*p2);
    printf("%f\n",*p3);
}
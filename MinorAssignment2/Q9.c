// 1941012631 Ujjwal Jamuar CSE L 5th Sem
// Faculty - Mr. TrilokNath pandey

#include<stdio.h>
int main(){
    int a=12;
    int b=52;
    int c=8;
    int *ptr1,*ptr2,*ptr3;
    ptr1=&a;
    ptr2=&b;
    ptr3=&c;
    printf("%d\n",*ptr1+10);
    printf("%d\n",*ptr2+10);
    printf("%d\n",*ptr3+10);
}
// 1941012631 Ujjwal Jamuar CSE L 5th Sem
// Faculty - Mr. TrilokNath pandey

#include<stdio.h>
int main(){
    int a=12;
    int b=25;
    int c=18;
    int *ptr;
    ptr=&a;
    printf("%d\n",*ptr+10);
    ptr=&b;
    printf("%d\n",*ptr+10);
    ptr=&c;
    printf("%d\n",*ptr+10);
}
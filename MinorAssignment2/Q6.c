// 1941012631 Ujjwal Jamuar CSE L 5th Sem
// Faculty - Mr. TrilokNath pandey

#include<stdio.h>
int main(){
    int x=89;
    int *p1,*p2,*p3;
    p1=&x;
    p2=&x;
    p3=&x;
    printf("%d\n",*p1);
    printf("%d\n",*p2);
    printf("%d\n",*p3);
}
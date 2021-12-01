// 1941012631 Ujjwal Jamuar CSE L 5th Sem
// Faculty - Mr. TrilokNath pandey

#include<stdio.h>
int main(){
    int Ivar=12;
    int *ptr,**Tptr;
    ptr=&Ivar;
    Tptr=&ptr;
    printf("%d\n",Ivar);
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    printf("%p\n",Tptr);
    printf("%d\n",**Tptr);
}
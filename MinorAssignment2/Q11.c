// 1941012631 Ujjwal Jamuar CSE L 5th Sem
// Faculty - Mr. TrilokNath pandey

#include <stdio.h>
void main(){
    int a = 18,b = 52;
    int *ptr1,*ptr2;

    ptr1 = &a;
    ptr2 = &b;

    if(*ptr1 > *ptr2){
        printf("a is greater than b .\n");
    }
    else{
        printf("b is greater than a. \n");
    }
}

/* 
18 
b is greater than a.
 */ 
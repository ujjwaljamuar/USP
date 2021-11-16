#include <stdio.h>
int main(){
    int ptr = 25;
    printf("ptr = %d \n",ptr);
    printf("&ptr = %p \n",&ptr);

    int *ptr1;
    ptr1 = &ptr;
    printf("ptr1 = %d \n",*ptr1);
    printf("&ptr1 = %p \n",&ptr1);
 
    int **ptr2;
    ptr2 = &ptr1;
    printf("ptr2 = %d \n",**ptr2);
    printf("&ptr2 = %p \n",&ptr2);

    int ***ptr3;
    ptr3 = &ptr2;
    printf("ptr3 = %d \n",***ptr3);
    printf("&ptr3 = %p \n",&ptr3);

    return 0;
}
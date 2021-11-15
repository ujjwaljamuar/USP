#include <stdio.h>

int main()
{
    float k = 25;
    float *ptr;
    ptr = &k;
    printf("k = %lf \n", k);
    printf("address of k using pointer ptr 1 = %p \n",(ptr));
    printf("value of k using pointer ptr 1 = %lf \n",*(ptr));
    printf("ptr1 + 1 = %p \n",ptr+1 );
    printf("*((ptr1 )+ 2) = %lf \n",*(ptr) + 2);
    char m = 'T';
    char *ptr2;
    ptr2 = &m;
    printf("m = %c \n",m);
    printf("Address of m ptr1 = %p \n",ptr2);
    printf("value of m using pointer ptr1 = %c \n",*(ptr2));
    printf("ptr + 1 = %p \n",ptr2+1);
    printf("ptr1 + 1 = %u \n",*(ptr2 + 1) );
    int *m1,n = 77;
    m1 = &n;
    *(m1) = 80;
    printf("m = %p \n",m1);
    printf("n = %d \n",n);
    printf("n = %d \n",(*m1)*10);

    return 0;
}
// 1941012631 Ujjwal Jamuar CSE L 5th Sem
// Faculty - Mr. TrilokNath pandey

#include<stdio.h>
int main(){
    int a=25;
    int b=50;
    printf("Value %d\t Address %p\n",a,&a);
    printf("Value %d\t Address %p\n",b,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Value %d\t Address %p\n",a,&a);
    printf("Value %d\t Address %p\n",b,&b);
}
// Addresses are same
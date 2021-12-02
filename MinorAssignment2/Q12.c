// 1941012631 Ujjwal Jamuar CSE L 5th Sem
// Faculty - Mr. TrilokNath pandey

#include <stdio.h>
void main(){
    int Ia = 23;

    int *ptr1,*ptr2,*ptr3;
    ptr1 = &Ia;
    ptr2 = &Ia;
    ptr3 = &Ia;

    printf("Value of Ia = %d \n",Ia);

    *ptr1 = 24;
    printf("Value of Ia = %d \n",Ia);

    *ptr2 = 25;
    printf("Value of Ia = %d \n",Ia);

    *ptr3 = 26;
    printf("Value of Ia = %d \n",Ia);

    /*
    Value of Ia = 23 
    Value of Ia = 24 
    Value of Ia = 25
    Value of Ia = 26
    */

}
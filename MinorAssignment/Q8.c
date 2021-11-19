#include <stdio.h>
void main(){
    int x;
    printf("Enter number of eggs : \n");
    scanf("%d",&x);

    int gross,dozen,left;

    gross = x / 144;
    left = x % 144;

    dozen = left / 12;
    left = left % 12;

    printf("Your number of eggs is %d gross, %d dozen, and %d.",gross,dozen,left);
}
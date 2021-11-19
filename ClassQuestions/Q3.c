#include <stdio.h>

int main(){
    int vol,min;
    printf("Enter volume of fluid to be infused in (ml) : \n");
    scanf("%d",&vol);

    printf("Enter minutes for the fluid to be infused : \n");
    scanf("%d",&min);

    int rate = vol/min*60;            // for in ml/hr
    printf("Rate : %d ml/hr",rate);
}
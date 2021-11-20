#include <stdio.h>
void atm(int cash,int *fifty,int *twenty,int *ten){
    int left;
    *fifty = cash / 50;
    left = cash % 50;

    *twenty = left /20;
    left = left % 20;

    *ten = left / 10;

    printf("%d 50s, \n%d 20s, \n%d 10s \n",*fifty,*twenty,*ten); 
}
void main(){
    int cash,fifty,twenty,ten;
    printf("Enter cash : ");
    scanf("%d",&cash);
    if(cash < 0){
        printf("Invalid Input.");
    }
    else if(cash % 10 != 0){
        printf("Invalid! Not a multiple of 10.");
    }
    else{
        atm(cash,&fifty,&twenty,&ten);
    }
    
    
}
#include <stdio.h>
#define SIZE 2
#define LEN 10
void main(){
    int regd[SIZE],sem[SIZE];
    float sgpa[SIZE];
    char name[SIZE][LEN],sec[SIZE];

    for(int i = 0;i < SIZE;i++){
        printf("Enter name,sec, reg no. , sem and sgpa : \n");
        
        scanf(" %s",&name[i]);
        scanf(" %c",&sec[i]);
        scanf("%d",&regd[i]);
        scanf("%d",&sem[i]);
        scanf("%f",&sgpa[i]);

    }

    printf("Name   \t Sec     Regd no.    Sem     Sgpa \n");
    for(int i = 0;i<SIZE;i++){
        printf(" %s \t %c \t %d \t%d \t%.1f \n",name[i],sec[i],regd[i],sem[i],sgpa[i]);
    }
}
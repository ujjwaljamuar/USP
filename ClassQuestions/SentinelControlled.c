#include <stdio.h>

void main(){
    int n;
    int i;
    int x[i];
    do{
        i++;
        
        scanf("%d",&x[i]);
        
    }while(n != -1);

    printf("\n");

    int s = sizeof(x)/sizeof(x[0]);

    for(int i = 0;i < s;i++){
        printf("%d \t",x[i]);
    }
    
}
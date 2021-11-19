#include <stdio.h>
#define PRICE 150

int main(){
    int flush1 = 15;
    int flush2 = 2;
    int avg = 14;
    int population;
    printf("Enter the population : \n");
    scanf("%d",&population);

    // 1 toilet for 3 person 
    int usage1 = (flush1 * population * avg)/3;
    
    int usage2 = (flush2* population*avg)/3;

    int saved = usage1-usage2;

    int cost = (PRICE * population)/3;

    printf("Water saved is %d litres/day. \n",saved);

    printf("Cost of installing is : $ %d .",cost);
}
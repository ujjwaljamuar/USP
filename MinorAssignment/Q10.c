#include <stdio.h>
void main(){
    float l1,l2,w1,w2,area1,area2,gArea;

    printf("Enter length and width of the yard : \n");
    scanf("%f %f",&l1,&w1);

    printf("Enter length and width of the house : \n");
    scanf("%f %f",&l2,&w2);

    area1 = l1 * w1;
    area2 = l2 * w2;

    gArea = area1 - area2;

    float time = gArea / 2;

    printf("The time required to cut the grass at 2sq.ft per sec is %.2f seconds",time);    

}
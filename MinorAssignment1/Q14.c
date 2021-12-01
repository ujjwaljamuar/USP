#include <stdio.h>
#include <math.h>
void main(){
    int x1,y1,z1,x2,y2,z2;

    printf("Enter x1,y1,z1 : \n");
    scanf("%d %d %d",&x1,&y1,&z1);

    printf("Enter x2,y2,z2 : \n");
    scanf("%d %d %d",&x2,&y2,&z2);

    int distance = sqrt(((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2)) + ((z1-z2)*(z1-z2)));
    
    printf("Distance  = %d",distance);

}
// 1941012631 Ujjwal Jamuar CSE L 5th Sem
// Faculty - Mr. TrilokNath Pandey

#include <stdio.h>

void sum_n_avg(double *a,double *b,double *c){
    double sump = *a+*b+*c;
    double avgp = sump/3;

    printf("Sum of the three numbers = %.2lf \nAverage  = %.2lf \n",sump,avgp);

}
void main(){
    double a,b,c;

    printf("Enter three numbers> \n");
    scanf("%lf%lf%lf", &a, &b, &c);
    sum_n_avg(&a,&b,&c);
}

/*
Enter three numbers> 
15.55
18.65
21.84
Sum of the three numbers = 56.04 
Average  = 18.68
*/
#include <stdio.h>

void main()
{
    double x[8]={16.0,12.0,6.0,8.0,2.5,12.0,14.0,-54.5};
    int i = 5;

    printf("1 %d %.1f \n", 4, x[4]);

    printf("2 %d %.1f \n", i, x[i]);

    printf("3 %.1f \n", x[i] + 1);

    printf("4 \t %.1f \n", x[i+1]);

    printf("5 \t %.1f \n", x[i+i]);

    printf("6 \t %.1f \n", x[2*i]);

    printf("7 \t %.1f \n", x[2*i -3]);

    printf("8 \t %.1f \n", x[(int)x[4]]);

    printf("9 \t %.1f \n ",x[i++]);

    printf("10 \t %.1f \n ",x[--i]);

    x[i-1] = x[i];
    printf("11 \t %.1f \n",x[i-1]);

    x[i] = x[i+1];
    printf("12 \t %.1f \n",x[i]);

    printf("13 \t %.1f \n",x[i] -1);

}
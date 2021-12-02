// 1941012631 Ujjwal Jamuar CSE L 5th Sem
// Faculty - Mr. TrilokNath Pandey

#include <stdio.h>

void double_trouble(int *p, int y);
void trouble(int *x, int *y);

void double_trouble(int *p, int y)
{
    int x;
    x = 10;
    *p = 2 * x - y;
}
void trouble(int *x, int *y)
{
    double_trouble(x, 7);
    double_trouble(y, *x);
}

int main(void)
{
    int x, y;
    trouble(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return (0);
}

/*
x = 13, y = 7

*/
// 1941012631 Ujjwal Jamuar CSE L 5th Sem
// Faculty - Mr. TrilokNath Pandey

#include <stdio.h>
void sum(int a, int b, int *cp);

void sum(int a, int b, int *cp)
{
    *cp = a + b;
}
int main(void)
{
    int x, y, z;
    x = 7;
    y = 2;
    printf("x y z\n\n");

    sum(x, y, &z);
    printf("%4d%4d%4d\n", x, y, z);

    sum(y, x, &z);
    printf("%4d%4d%4d\n", x, y, z);

    sum(z, y, &x);
    printf("%4d%4d%4d\n", x, y, z);

    sum(z, z, &x);
    printf("%4d%4d%4d\n", x, y, z);

    sum(y, y, &y);
    printf("%4d%4d%4d\n", x, y, z);
    
    return (0);
}

/*
   x   y   z

   7   2   9
   7   2   9
  11   2   9
  18   2   9
  18   4   9

  */
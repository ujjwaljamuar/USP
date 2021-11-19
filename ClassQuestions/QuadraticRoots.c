#include <math.h>
#include <stdio.h>
int main()
{
    double a, b, c, d, root1, root2, realRoot, ImagRoot;
    printf("Enter coefficients a, b and c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b*b - 4 * a * c;

    // for real and different roots
    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.3lf", root1, root2);
    }

    //  for real and equal roots
    else if (d == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.3lf;", root1);
    }

    // if roots are not real
    else
    {
        realRoot = -b / (2 * a);
        ImagRoot = sqrt(-d) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realRoot, ImagRoot, realRoot, ImagRoot);
    }

    return 0;
}

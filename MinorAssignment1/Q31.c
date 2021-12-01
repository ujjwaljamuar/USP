
#include <stdio.h>

long long convert(int n)
{
    long long binary = 0;
    int remainder, i = 1;
    while (n != 0)
    {
        remainder = n % 2;
        n /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}
int main()
{
    int n, binary;
    printf("Enter a decimal number -> ");
    scanf("%d", &n);
    binary = convert(n);
    printf("decimal %d  =  %lld in binary", n, binary);
    return 0;
}
#include <stdio.h>
void isDivisible(int val)
{
    int sum = 0;
    int n = val;
    while (n > 0)
    {
        printf("%d\n", n % 10);
        sum += n % 10;
        n /= 10;
    }
    if (sum % 9 == 0)
    {
        printf("%d is divisible by 9\n", val);
    }
    else
    {
        printf("%d is not divisible by 9\n", val);
    }
}
int main()
{
    int n;
    printf("Enter an Integer -> ");
    scanf("%d", &n);
    isDivisible(n);
    return 0;
}
#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a == 0 && b == 0)
    {
        printf("GCD is not defined.\n");
    }
    else
    {
        result = gcd(a < 0 ? -a : a, b < 0 ? -b : b);
        printf("GCD = %d\n", result);
    }

    return 0;
}
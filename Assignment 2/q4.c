#include <stdio.h>

int power(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return 2 * power(n - 1);
    }
}

int main()
{
    int n, result;

    printf("Enter the power: ");
    scanf("%d", &n);

    if (n < 0 || n > 30)
    {
        printf("Please enter a power between 0 and 30.\n");
    }
    else
    {
        result = power(n);
        printf("2^%d = %d\n", n, result);
    }

    return 0;
}
#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n < 1 || n > 40)
    {
        printf("Please enter terms between 1 and 40.\n");
    }
    else
    {
        printf("Fibonacci Series:\n");

        for (i = 0; i < n; i++)
        {
            printf("%d ", fibonacci(i));
        }
    }

    return 0;
}
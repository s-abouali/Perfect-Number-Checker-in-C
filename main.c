
#include <stdio.h>

int sumProperDivisors(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return sum;
}

int isPerfect(int n)
{
    if (n <= 0)
        return 0;

    return sumProperDivisors(n) == n;
}

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (isPerfect(n))
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);

    return 0;
}

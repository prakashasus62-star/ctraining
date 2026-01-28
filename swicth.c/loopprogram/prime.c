#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int num = 2; num <= n; num++)
    {
        int isPrime = 1;

        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            count++;
        }
    }

    printf("Number of prime numbers from 1 to %d is: %d", n, count);

    return 0;
}
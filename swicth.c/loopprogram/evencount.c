#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int sum = 0;

    for (; num != 0; )
    {
        int digit = num % 10;
        num = num / 10;

        if (digit % 2 == 0)
        {
            sum = sum + 1;
        }
    }

    printf("%d", sum);
    return 0;
}

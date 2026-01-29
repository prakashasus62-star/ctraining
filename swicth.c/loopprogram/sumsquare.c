#include <stdio.h>

int main()
{
    int num = 3;
    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        sum = sum + (i * i);
    }
    printf("%d", sum);
    return 0;
}
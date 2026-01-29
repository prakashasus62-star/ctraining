#include <stdio.h>
int main()
{
    int num = 153;
    int original = num;
    int sum = 0;
    for (; num > 0;)
    {
        int digit = num % 10;
        sum = sum+(digit*digit*digit);
        num = num / 10;
    }
    if (sum == original)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
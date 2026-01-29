#include <stdio.h>
int main()
{
    int num = 121;
    int original=num;
    int rev=0;
    for (; num > 0;)
    {
        int digit = num % 10;
        rev=rev*10+digit;
        num = num / 10;
    }
    if ( original== rev)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
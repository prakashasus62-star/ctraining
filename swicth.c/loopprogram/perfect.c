#include <stdio.h>
int main()
{
    int num = 10;
    int perfect = 0;
    for (int i = 1; i <=num / 2; i++)
    {
        if (num % i == 0)
        {
            perfect = perfect + i;
        }
    }
    if (perfect == num)
    {
        printf("perfect number");
    }
    else
    {
        printf("Not a perfect number");
    }
}
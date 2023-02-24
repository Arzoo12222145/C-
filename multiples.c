#include<stdio.h>

int main()
{
    int  count = 0, n=1;
    while (n<=100)
    {
        if (n % 5 == 0)
        {
            count = count + 1;
        }
        n = n + 1;
    }
    printf("\n%d",count);
}

#include<stdio.h>

int main()
{
    int i = 3, sum = 0;
    for (;;)
    {
        sum = sum + i;
        if (i == 2)
            break;
        i--;
    }
    printf("%d",sum);
}

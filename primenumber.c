#include<stdio.h>

int main()
{
    int n, i = 1, count = 0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if (n % i == 0)
        {
            count = count + 1;
        }
        i = i + 1;
    }
    if (count == 2)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}


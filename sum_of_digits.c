#include<stdio.h>

int main()
{
    int n,digit=0;
    printf("\nEnter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        digit = digit + (n % 10);
        n = n / 10;
    }
    printf("Sum of digits = %d",digit);
}

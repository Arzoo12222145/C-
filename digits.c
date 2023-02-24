#include<stdio.h>

int main()
{
    int n,digit = 0, count = 0;
    printf("\nEnter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        digit = n % 10;
        count =  count + 1;
        n = n / 10;
    }
    printf("%d",count);
}

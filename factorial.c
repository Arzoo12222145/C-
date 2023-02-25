#include<stdio.h>

int main()
{
    int n, i = 1,fact = 1;
    printf("\nEnter any number:");
    scanf("%d",&n);
    while(i<=n)
    {
        fact = fact * i;
        i = i+1;
    }
    printf("\n%d",fact);
}

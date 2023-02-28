#include<stdio.h>

int main()
{
    int n, rev = 0, digit, y,i;
    printf("Enter a number:");
    scanf("%d",&n);
    y = n;
    for(i = 1;n > 0;i++)
    {
        digit = n%10;
        rev = (rev * 10) + digit;
        n = n / 10;
    }
    if (y == rev)
    {
        printf("%d is a palindrome number",y);
    }
    else
    {
        printf("%d is not a palindrome number",y);
    }
}


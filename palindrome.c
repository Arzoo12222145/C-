#include<stdio.h>

int main()
{
    int n, rev = 0, digit, y;
    printf("Enter a number:");
    scanf("%d",&n);
    y = n;
    while(n>0)
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

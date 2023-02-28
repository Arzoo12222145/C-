#include<stdio.h>

int main()
{
    int n,digit = 0,sum = 0,count = 0, y, temp, power, i;
    printf("Enter a number:");
    scanf("%d",&n);
    y = n;
    while(n>0)
    {
        temp = n % 10;
        count = count + 1;
        n = n / 10;
    }
    temp = y;
    while(temp>0)
    {
        digit = temp % 10;
        power = 1;
        for(i = 0; i < count; i++)
        {
            power = power * digit;
        }
        sum = sum + power;
        temp = temp / 10;
    }
    if (y == sum)
    {
        printf("%d is an armstrong number",y);
    }
    else
    {
        printf("%d is not an armstrong number",y);
    }

}

#include<stdio.h>

int main()
{
    int a,b, lcm = 1,i;
    printf("Enter a number:");
    scanf("%d%d",&a,&b);
    for(i = 1; i <= a*b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }
    printf("LCM of %d and %d is %d",a,b,lcm);
}


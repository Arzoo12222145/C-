#include<stdio.h>

int main()
{
    int a,b,c,i = 0,count = 0;
    printf("Enter the number:");
    scanf("%d%d%d",&a,&b,&c);
    for(i = a; i<=b; i++)
    {
        if (i % c == 0)
        {
            count = count + 1;
        }
    }
    printf("%d",count);
}

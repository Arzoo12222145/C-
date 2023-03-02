#include<stdio.h>

int main()
{
    int n,i = 1;
    printf("%d Enter the number:");
    scanf("%d",&n);
    for (i = 1; i<=3;i++)
        for(i = 1; i<=5; i++)
    printf("\n%d X %d = %d",n,i,n*i);
    return 0;

}

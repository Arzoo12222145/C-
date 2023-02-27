#include<stdio.h>

int main()
{
    int a, b,n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Enter first two numbers of the series:");
    scanf("%d%d",&a,&b);
    for(int i = 3; i <= n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        printf("\n%d",c);
    }

}

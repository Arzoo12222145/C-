#include<stdio.h>

int add(int,int);
int main()
{
    int a, b,result;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    result = add(a,b);
    printf("Sum = %d",result);
    return 0;
}
int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

#include<stdio.h>

void swap(int,int);

int main()
{
    int a = 1, b = 2;
    swap(a,b);
    printf("\n%d%d",a,b);
    return 0;
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\n%d%d",x,y);
}

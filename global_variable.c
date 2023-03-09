#include<stdio.h>

int x = 5;
void m();
void n();

int main()
{
    int x = 3;
    m();
    print("%d",x);
    return 0;
}
void m()
{
    x = 8;
    n();
}
void n()
{
    printf("%d",x);
}

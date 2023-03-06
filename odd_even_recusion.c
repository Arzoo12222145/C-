#include<stdio.h>

void odd(int n);
void even(int n);


void odd(int n)
{
    if (n <= 10)
    {
        printf("%d ",n+1);
        n++;
        even(n);
    }
    return;
}
void even(int n)
{
    if (n <= 10)
    {
        printf("%d ",n-1);
        n++;
        odd(n);
    }
    return;
}
int main()
{
    int n = 1;
    odd(n);
}

#include<stdio.h>

int main()
{
    int a[5];
    int *ptr = a,i,sum;
    printf("\nEnter array elements: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",ptr + i);
    }
}

#include<stdio.h>

int main()
{
    int a[5], i;
    printf("\nEnter array elements: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\Array elements are: ");
    for ( i = 0; i < 5; i++)
    {
        printf("\n%d",a[i]);
    }
}

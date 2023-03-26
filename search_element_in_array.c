#include<stdio.h>

int main()
{
    int a[5], n, i, index;

    printf("\nEnter array elements: ");

    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter element to be searched:");
    scanf("%d",&n);


    for ( i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            index = i;
            break;
        }
    }

    if ( index == -1)
    {
        printf("\nElement not found!!!");
    }
    else
    {
        printf("\nElement found at index: %d and exact position: %d", index, index + 1);
    }
}

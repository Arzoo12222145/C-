#include<stdio.h>

int main()
{
    int a[8] = {5,8,11,13,55,77,100,102};
    int key,loc = -1,mid,beg = 0,last = 7;
    printf("\nEnter the element to be searched: ");
    scanf("%d",&key);
    while ( beg <= key)
    {
        mid = (beg + last) / 2;
        if (a[mid] == key)
        {
            loc = mid;
            break;
        }
        else if (a[mid] > key)
        {
            last = mid - 1;
        }
        else if ( a[mid] < key)
        {
            beg = mid + 1;
        }

    }
    if(loc != -1)
    {
        printf("Element found at %d",loc+1);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}

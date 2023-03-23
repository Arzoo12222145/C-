#include<stdio.h>

int main()
{
    int a[] = {1,2,3,4,5},i,n;
    n = sizeof(a)/sizeof(a[0]);
    printf("size of array : %d",n);
    for(i = 0; i < 5 ; i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}

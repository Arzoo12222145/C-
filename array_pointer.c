#include<stdio.h>

int main()
{
    int a[5] = (1,2,3,4,5);
    int *ptr = a, i;
    printf("%u\n",ptr);
    for (i = 0; i < 5; i++)
    {
        printf("%d",*(ptr + i));
        printf("%d",*(i + ptr));
        printf("%d",ptr[i]);
        printf("%d",*i[ptr]);

    }
    printf("\n%u",ptr);
}

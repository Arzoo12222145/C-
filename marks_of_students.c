#include<stdio.h>

int main()
{
    int i;
    float a[5], total = 0.0f,avg = 0.0f;
    printf("\nEnter marks of five students of CSE101: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%f",&a[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("\n%f",a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        total = total + a[i];
    }
    printf("\nTotal marks: %f", total);
    avg = total / 5;
    printf("Average is : %f", avg);
}

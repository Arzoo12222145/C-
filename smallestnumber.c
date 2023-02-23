#include<stdio.h>

int main(){

    int a, b, c;
    printf("\nEnter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b && a<c)
    {
        printf("\n a is the smallest with value: %d",a);
    }
    else if (b<a && b<c)
    {
        printf("\n b is the smallest with value: %d",b);
    }
    else
    {
        printf("\n c is the smallest with value: %d",c);
    }

    return 0;
}

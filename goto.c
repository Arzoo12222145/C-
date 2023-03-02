#include<stdio.h>

int main()
{
    int x;
    label1:
    printf("%dEnter the value of:");
    scanf("%d",&x);
    if (x>100)
        goto label1;
    else
        goto label2;
    label2:
    printf("\nvalue is ok");
}

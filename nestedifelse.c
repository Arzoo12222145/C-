#include<stdio.h>

int main(){

    int number;
    printf("\nEnter number:");
    scanf("%d",&number);
    if (number == 0)
    {
        printf("\nNumber is zero");
    }
    else if (number>0)
    {
        printf("\nNumber is +ve");
    }
    else
    {
        printf("\nNumber is -ve");
    }

    return 0;
}

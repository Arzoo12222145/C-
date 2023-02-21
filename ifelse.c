#include<stdio.h>

int main() {

    int num;
    printf("\nEnter the number:");
    scanf("%d",&num);
    if (num<0){
        printf("\nNumber is -ve and its square is: %d",num*num);
    }
    else{
        printf("Hello World");
    }
    return 0;
}

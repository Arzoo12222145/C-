#include<stdio.h>

int main(){

    int a;
    printf("\nEnter a number:");
    scanf("%d",&a);
    if (a%2==0){
        printf("\n%d is an even number",a);
    }
    else{
        printf("\no%d is an odd number",a);
    }
}

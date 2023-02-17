
#include<stdio.h>

int main(){

    int a;
    printf("\nEnter age of the person:");
    scanf("%d",&a);
    if (a>=18){
        printf("\nEligible for voting");
    }
    else{
        printf("\nNot eligible for voting");
    }
}

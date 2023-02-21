#include<stdio.h>

int main(){

    float p1,q1,p2,q2,p3,q3,amount1= 0.0f,amount2=0.0f;
    printf("\nEnter price and quantity of first product:");
    scanf("%f%f",&p1,&q1);
    printf("\nEnter price and quantity of second product:");
    scanf("%f%f",&p2,&q2);
    printf("\nEnter price and quantity of third product:");
    scanf("%f%f",&p3,&q3);
    amount1 = (p1*q1)+(p2*q2)+(p3*q3);
    printf("\nAmount to pay without discount:%.2f",amount1);
    amount2 = amount1 - (0.10*amount1);
    printf("\nAmount to pay with discount:%.2f",amount2);

}

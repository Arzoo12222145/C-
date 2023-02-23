#include<stdio.h>

int main(){

    float p = 2300.0f,r = 2.3f,t = 3.4f, si = 0.0f,a = 0.0f;
    si = (a*r*t)/100.0;
    a = p+si;
    printf("\nSimple interest:%.3f and final amount is:%.3f",si,a);
    return 0;
}

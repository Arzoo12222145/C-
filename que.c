#include<stdio.h>

int main(){

    int x = 1,y = 2,z;
    x = ++y;
    z = x-- ;
    y = --z;
    printf("%d %d %d",x,y,z);

    return 0;
}


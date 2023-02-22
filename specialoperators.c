#include<stdio.h>

int main() {

    int x = 1, y = 2, z = 3, output;
    output = x, y ,z;
    printf("%d",output);
    output = (x, y ,z);
    printf("%d",output);

    return 0;
}

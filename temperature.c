#include<stdio.h>

int main(){

    float kel,cel;
    printf("Enter the temperature in kelvin:");
    scanf("%f",&kel);
    cel = kel - 273.15;
    printf("%.2f kelvin = %.2f celsius",kel,cel);
    getch();
    return 0;

}

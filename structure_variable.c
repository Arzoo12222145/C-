#include<stdio.h>
#include<string.h>
//Defining a structure
struct student
{
    char name[20];
    int r_no;
    float fees;
}s1,s2;
int main()
{
    strcpy(s1.name,"Aniket");
    s1.r_no = 12;
    s1.fees = 7800.2;
    strcpy(s2.name,"Swapnil");
    s2.r_no = 22;
    s2.fees = 99.7;
    printf("\n%s %d %f",s1.name,s1.r_no,s1.fees);
    printf("\n%s %d %f",s2.name,s2.r_no,s2.fees);
}

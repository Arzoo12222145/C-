#include<stdio.h>

int add();
int main()
{
    int answer;
    answer = add();
    printf("%d",answer);
    return 0;
}
int add()
{
    int a,b,result;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    result = a + b;
    return result;
}

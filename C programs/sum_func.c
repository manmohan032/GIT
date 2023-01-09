#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}
void main()
{
    int a=10,b=17;
    printf("The sum(call by value) is :%d",sum(a,b));
}
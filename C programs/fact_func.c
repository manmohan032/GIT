#include<stdio.h>

int fact(int a)
{
    if(a<2)
        return 1;
    return a*fact(a-1);
}
void main()
{
    int a;
    printf("enter the no to find the factorial : ");
    scanf("%d",&a);
    printf("The factorial is :%d",fact(a));
}
#include<stdio.h>

int main()
{
    int n;
    printf("enter the year you want to check");
    scanf("%d",&n);
    if((n%4==0&&n%100!=0)||n%400==0)
    {
        printf("it's a leap year");

    }
    else
    {
        printf("it's not a leap year");
    }
    return 0;

}
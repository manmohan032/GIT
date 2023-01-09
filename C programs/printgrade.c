#include<stdio.h>

int main()
{
    float n;
    scanf("%f",&n);
    if(n>=75&&n<=100)
    {
        printf("A Grade");
    }
    else if(n>=60&&n<75)
    {
        printf("B Grade");
    }
    else if(n>=50&&n<60)
    {
        printf("C Grade");
    }
    else if(n>=40&&n<50)
    {
        printf("D Grade");
    }
    else if(n<40)
    {
        printf("fail");
    }
    else
    {
        printf("Invalid Percentage");
    }
    return 0;
}
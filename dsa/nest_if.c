#include<stdio.h>

int main()
{
    char c;
    scanf("%c",&c);
    if(c>='a')
    {
        if(c<='z')
            printf("lowercase alphabet");
        else
            printf("any other character");
    }
    else
    {
        if(c>='A')
            printf("Uppercase alphabet");
        else
            printf("any other character");
    }

    return 0;
}
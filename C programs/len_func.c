#include<stdio.h>

int length(char ch[])
{
    int l=0;
    while(ch[l]!='\0')
    {
        l++;
    }
    return l;
}
void main()
{
    char ch[]="My name is manmohan singh.";
    printf("The length is :%d",length(ch));
}
#include<stdio.h>
#include<string.h>

void main()
{
    char ch[]="This is a string.";
    int l=strlen(ch);
    printf("length is : %d\n",l);
    printf("Capitalised string is : %s\n",strupr(ch));
    printf("Reversed string is : %s\n",strrev(ch));
    printf("and there are more string functions");
}
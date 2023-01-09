#include<stdio.h>
int main()
{
    for(char i='A';i<='D';i++)
    {
        for(char a='A';a<=i;a++)
        {
            printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}
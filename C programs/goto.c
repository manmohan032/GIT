#include<stdio.h>
int main()
{
    int i=0;
    while(i<10)
    {
        i++;
        if(i==6)
        {
            printf("the no. is six\n");
                goto six;
        }
        //printf("the no. is : %d\n",i );
    }
    six:
    printf("now the no. is six");
    return 0;
}
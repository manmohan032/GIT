#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i*2;j++)
        {
            if(i%3!=1&&j-1==i)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
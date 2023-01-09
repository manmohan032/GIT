#include<stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d",&n); 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i;j++)
        {

            printf("*");
        }
        printf("\n");
    }
    return 0;
}
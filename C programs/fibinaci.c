#include<stdio.h>
int main()
{
    int a=1,b=1,n,c=0;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=1;i<=n-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}
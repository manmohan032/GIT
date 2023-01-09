#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int c=0,a[1000];
    for(int i=t;i!=0;i=i/10)
    {
        a[c]=i%10;
        c++;
    }
    for(int i=0;i<=c;i++)
    {
        int d=0;
        for(int j=0;j<=c;j++)
        {
            if(a[i]>a[j])
                d++;
        }
        if(d==1)
        {
            printf("%d",a[i]);
        }
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int n,d,a=0,nd=0;
    float c=0;
    scanf("%d",&n);
    for(int i=n;i!=0;i=i/10)
    {
        nd++;
        //printf("%d",nd);
    }
    for(int i=n;i!=0;i=i/10)
    {
        float d=i%10;
        int pw=1;
        for(int j=1;j<=nd;j++)
            pw=pw*d;
        a=a+pw;
    }
    if(a==n)
    {
        printf("no. is armstrong");
    }
    else{
        printf("no. is not a armstrong");
    }
    return 0;
}
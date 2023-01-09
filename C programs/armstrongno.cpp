#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,a=0;
    float c=0;
    scanf("%d",&n);
    int cp=n;
    for(int i=cp;i!=0;i=i/10)
    {
        float d=i%10;
        
        a=a+d*d*d;
        
    }
    if(a==cp)
    {
        printf("no is armstrong");
    }
    else{
        printf("no is not a armstrong");
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int a,b,t=0;
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    
    printf("swap\n%d\n%d\n",a,b);//using temp variable
    
    b=a+b;
    a=b-a;
    b=b-a;
    printf("swap\n%d\n%d\n",a,b);//no temp variable
}
#include<stdio.h>

int main()
{
    int n,f=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        f=f*i;    
    printf("the factorial is : %d\n",f);

    
    return 0;
}
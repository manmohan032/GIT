#include<stdio.h>

int main()
{
    int n,d,a=0;
    int c=0;
    scanf("%d",&n);
    int cp=n;
    for(int i=cp;i!=0;i=i/10)
    {
        int d=i%10;
        c=c*10+d;//this will store the reverse no. 
    }
    if(cp==c)
    {
        printf("This is a palindrom number");
    }
    else
    {
        printf("This is not a palindrom number");
    }
    return 0;
}

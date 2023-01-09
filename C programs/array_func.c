#include<stdio.h>

int sum(int a[],int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
        s=s+a[i];
    return s;
}
void main()
{
    int a[]={1,2,3,4,5,56};
    printf("The sum is :%d",sum(a,6));
}
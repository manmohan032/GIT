#include<stdio.h>

int main()
{
    int c,n;
    int arr[10];
    for(int i=0;i<9;i++)
    {
        scanf("%d",&arr[i]);
       
    }
    scanf("%d",&n);
    for(int i=0;i<9;i++)
    {
        if(arr[i]==n)
        {
            printf("element is preseny at : %d",i+1);
        }
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int i;
    int arr[4];
    for(i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    int n=arr[0];
    for(i=1;i<4;i++)
    {
        if(arr[i]>n)
        {
            n=arr[i];
        }
    }
    printf("The largest of 4 is : %d",n);
    return 0;
}
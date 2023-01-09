#include<stdio.h>

int main()
{
    int n;
    int arr[]={1,2,3,4,5,6,7,8,9};
    printf("enter the element to search : ");
    scanf("%d",&n);
    for(int i=0;i<9;i++)
    {
        if(arr[i]==n)
        {
            printf("element is present at : %d",i+1);
        }
    }
    return 0;
}
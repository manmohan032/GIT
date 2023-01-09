#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int p=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]>a[i])
            {
                p=j;
            }
        }
        int t=a[i];
        a[i]=a[p];
        a[p]=t;
    }
    printf("\nSorted in descending order: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int p=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<a[i])
            {
                p=j;
            }
        }
        int t=a[i];
        a[i]=a[p];
        a[p]=t;
    }
    printf("\nSorted in Assending order: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
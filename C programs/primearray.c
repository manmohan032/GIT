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
    printf("\n");
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
                c++;
        }
        if(c==0)
        {
            printf("%d is a prime no.\n",a[i]);
        }
        else
        {
            printf("%d is not a prime no.\n",a[i]);
        }
    }
    return 0;
}
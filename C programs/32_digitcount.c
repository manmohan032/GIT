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
    int min=a[0],max=a[0];
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=a[i];j!=0;j=j/10)
        {
            c++;
        }
        printf("array at index %d has %d digits\n",i+1,c);
    }
    return 0;
}
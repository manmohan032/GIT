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
    int s;
    scanf("%d",&s);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s==a[i])
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
        printf("%d no. is present in this array",s);
    }
    else
    {
        printf("%d no. is not present in this array",s);
    }
    return 0;
}
#include<stdio.h>
void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

}
int sort(int *arr,int s,int e)
{
    int i=s+1;
    do
    {
        while (arr[s]<arr[e])
        {
            e--;
        }
        while(arr[s]>arr[i])
        {
            i++;
        }
        if(i<e)
        {
            int t=arr[i];
            arr[i]=arr[e];
            arr[e]=t;
        }
        
    }while(i<e);
    int t=arr[e];
    arr[e]=arr[s];
    arr[s]=t;
    return e;
}
void quicksort(int *arr,int s,int e)
{
    if(s<e)
    {
        int index=sort(arr,s,e);
        quicksort(arr,index+1,e);
        quicksort(arr,s,index-1);

    }
}
int main()
{
    int arr[]={4,2,6,1,7,19,5};
    int n=7;
    quicksort(arr,0,n-1);
    print(arr,n);
}
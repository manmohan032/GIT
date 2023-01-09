#include<iostream>
using namespace std;
void sort(int *arr,int s,int mid,int e)
{
    int arr1[s+e],s1=s,s2=mid+1,s3=0;
    while(s1<=mid&&s2<=e)
    {
        if(arr[s1]>arr[s2])
        {
            arr1[s3]=arr[s2];
            s2++;
            s3++;
        }
        else if(arr[s1]<arr[s2])
        {
            arr1[s3]=arr[s1];
            s1++;
            s3++;
        }
    }
    while (s1<=mid)
    {
        arr1[s3]=arr[s1];
        s1++;
        s3++;
    }
    while (s2<=e)
    {
        arr1[s3]=arr[s2];
        s2++;
        s3++;
    }
    s3=0;
    for(int i=s;i<=e;i++)
    {
        arr[i]=arr1[s3];
        s3++;
    }
}
void mergesort(int *arr,int s,int e)
{
    if(s<e)
    {
        int mid=(s+e)/2;
        mergesort(arr,mid+1,e);
        mergesort(arr,s,mid);
        sort(arr,s,mid,e);
    }
}
void printarr(int *arr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    printf("\n");
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n);
    printarr(arr,n);
    return 0;
}
#include<iostream>
using namespace std;


int max(int *arr,int n)
{
    int max=arr[0],i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
void countsort(int *arr,int n)
{
    int mx=max(arr,n),c=0;
    int arr1[mx+1]={0};
    for(int i=0;i<n;i++)
    {
        arr1[arr[i]]++;
    }
    cout<<arr1[3]<<endl;
    for(int i=0;i<=mx;i++)
    {
        while(arr1[i]!=0)
        {
            arr1[i]=arr1[i]-1;
            arr[c]=i;
            c++;
        }
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
    int n;cin >>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    countsort(arr,n);
    printarr(arr,n);
    return 0;
}
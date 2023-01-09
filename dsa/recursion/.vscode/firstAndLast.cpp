#include<iostream>
using namespace std;
int first(int *arr,int n,int s,int e)
{
    if(s>e)
    {
        return s;
    }
    int mid=(s+e)/2;
    if(arr[mid]==n)
    {
        return first(arr,n,s,mid-1);
    }
    else if(arr[mid]>n)
        return first(arr,n,s,mid-1);
    return first(arr,n,mid+1,e);
}
int last(int *arr,int n,int s,int e)
{
    if(s>e)
    {
        return e;
    }
    int mid=(s+e)/2;
    if(arr[mid]==n)
    {
        return last(arr,n,mid+1,e);
    }
    else if(arr[mid]>n)
        return last(arr,n,s,mid-1);
    return last(arr,n,mid+1,e);
}
int main(){
    int arr[]={1,1,2,3,4,4,4,4,4,4,4,4,4,4,4,4,4,5,5,5,5,5,5};
    cout<<last(arr,5,0,sizeof(arr)/sizeof(1));
    return 0;
}
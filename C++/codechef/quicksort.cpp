#include<iostream>
using namespace std;

int sort(int *arr,int start,int end)
{
    int key=arr[start],c=start+1,large=0,small=0;
    do
    {
        if(arr[c]<key)
        {
            c++;
        }
        else if(arr[end]>key)
        {
            end--;
        }
        if(c<end)
        {
        int t=arr[c];
        arr[c]=arr[end];
        arr[end]=t;
        }
    }while(c<=end);
    
    int t=arr[end];
    arr[end]=arr[start];
    arr[start]=t;
    return end;
}
void quicksort(int *arr,int s,int e)
{
    if(s<e)
    {
        int index = sort(arr,s,e);
        quicksort(arr,s,index-1);
        quicksort(arr,index+1,e);
    }
}
void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={3,1,9,6,7,2,4,5,8};
    int n= 9;
    quicksort(arr,0,n-1);
    print(arr,n);
    return 0;
}
#include<iostream>
using namespace std;

void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionsort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i],t=i;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>key)
            {
                arr[j+1]=arr[j];
                t=j;                
            }
        }
        arr[t]=key;
    }
}
void selectionsort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int key=arr[i],t=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<key)
            {
                key=arr[j];
                t=j;                
            }
        }
        arr[t]=arr[i]; 
        arr[i]=key;
    }
}
void bubblesort(int *arr,int n)
{
    int i,p=1;
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                p=0;
            }
            
        }
        if(p)
        {
            return;
        }
    }
    
}
int main()
{
    int arr1[]={23,42,32,3,21};
    int arr[]={1,2,3,4,5,6};
    //bubblesort(arr,6);
    //print(arr,6);
    selectionsort(arr1,5);
    print(arr1,5);
    return 0;
}
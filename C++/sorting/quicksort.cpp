#include<iostream>
using namespace std;
int index(int *arr,int s,int e)
{
    int c=s+1;
    do
    {
        if(arr[s]>arr[c])
        {
            c++;
        }
        else if(arr[s]<arr[e])
        {
            e--;
        }
        else if(c<e)
        {
            int t=arr[c];
            arr[c]=arr[e];
            arr[e]=t;
        }
    }while(c<=e);

    int t=arr[e];
    arr[e]=arr[s];
    arr[s]=t;
    
    return e;

}
void qsort(int *arr,int s,int e)
{
    if(s<e)
    {
        int newindex= index(arr,s,e);
        qsort(arr,newindex+1,e);
        qsort(arr,s,newindex-1);
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
    qsort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}
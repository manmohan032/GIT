#include<iostream>
using namespace std;

void merge(int arr[],int f,int mid,int e)
{
    int n1=mid-f+1;
    int n2=e-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[f+i];
        
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }

    int i=0,j=0,k=f;

    while(i<n1&&j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;
        }
        else
        {
            arr[k]=b[j];
            j++;
        }
    }
    while(j<n2)
    {
        arr[k]=b[j];
        j++;
        k++;
    }
    while(i<n1);
    {
        arr[k]=a[i];
        k++;
        i++;
    }
}
    

void mergesort(int arr[],int f,int e)
{



    if(f<e)
    {
        int mid=(f+e)/2;
        mergesort(arr,mid+1,e);
        mergesort(arr,f,mid);
    }


}
int main()
{
    int n;
    cin>>n;

    int arr[n];



    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
        
            for(int j=0;j<n;j++)
            {
                cout<<arr[j];
            }

    return 0;
}
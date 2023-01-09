#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int a1[n],a2[n],j=0,k=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                a1[j]=arr[i];
                j++;
            }
            else
            {
                a2[k]=arr[i];
                k++;
            }
        }
        //cout<<j<<" "<<k<<endl;
        for(i=0;i<n;i++)
        {
            if(i<j)
            {
                arr[i]=a1[i];
            }
            else
            {
                arr[i]=a2[i-j];
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
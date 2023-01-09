#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=1;i<=n;i++)
        {
            arr[i-1]=i;
        } 
        //printf("%d me\n",((n/2)-1));
        for(int j=0;j<k;j++)
            for (int i=1;i<n-1;i++)
            {
                if(arr[i]>n/2)
                {
                    
                    arr[i]=(arr[i]*2)%n;
                }
                else
                {
                    arr[i]=(arr[i]*2-1)%n;
                }
            }
        for (int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        } 
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int cs=arr[0];
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=cs)
            {
                cs=arr[i];
                c++;
            }
            
        }
        cout<<c<<endl;
    }
    return 0;
}
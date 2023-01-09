#include<iostream>
using namespace std;

int main()
{
    int n,i,k,e;
    cin>>n>>k;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        
    }
    for ( i = 0; i < n; i++)
    {
        if(ar[i]==k)
        {
            cout<<"1";
            return 0;
        }
    }
    cout<<"-1";
    
    
    return 0;
}
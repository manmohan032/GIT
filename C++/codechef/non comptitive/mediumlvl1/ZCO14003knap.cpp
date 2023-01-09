#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

long long int ans(long long int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
    return max(ans(arr,n-1)+arr[n],ans(arr,n));
}

int main()
{
    int t;
    cin>>t;
    long long int v[t];
    for(int i=0;i<t;i++)
    {
        cin>>v[i];
    }
    cout<<ans(v,t);
    return 0;
}
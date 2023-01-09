#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
    int t;
    cin>>t;
    vector<long long int> v(t);
    for(int i=0;i<t;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long int ans=0;
    for(int i=0;i<t;i++)
    {
        ans=max(ans,v[i]*(t-i));
    }
    cout<<ans;
    return 0;
}
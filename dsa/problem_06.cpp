#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<m;j++)
        {
            cin>>b[j];
        }
        unordered_set<int> s;
        for(int i=0;i<n;i++)
            s.insert(a[i]);
        for(int j=0;j<m;j++)
            s.insert(b[j]);
        cout<<s.size()<<endl;
    }
    return 0;
}
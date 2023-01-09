#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int c[n+1];
    c[0]=0;
    for(i=1;i<=n;i++)
    {
        c[i]=c[i-1]+a[i-1];
    }
    int mx= INT_MIN;
    for(i=0;i<n;i++)
    {
        int s=0;
        for(j=0;j<i+1;j++)
        {
            s=c[i+1]-c[j];
            mx=max(mx,s);
        }
    }
    cout<<mx;

    return 0;
}
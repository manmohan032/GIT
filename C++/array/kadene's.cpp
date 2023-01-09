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
    int cs=0;
    int mx= INT_MIN ;
    for(i=0;i<n;i++)
    {
        cs=cs+a[i];
        if(cs<0)
        {
            cs=0;
        }
        mx=max(mx,cs);
    
    }
    cout<<mx;
    return 0;
}
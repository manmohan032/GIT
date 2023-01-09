#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    int a[n+1];
    a[n]=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    
    }

    j=0;
    int mx=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]>mx&&a[i+1]<a[i])
        {
            j++;
            
        }
        mx=max(a[i],mx);
    }
    cout<<j;
    return 0;
}
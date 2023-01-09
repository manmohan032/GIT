#include <iostream>
#include <climits>
using namespace std;
/*
int kadane(int a[],int n)
{
    int cs=0;
 
    return mx;

}*/
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
    int ts=0;

    
    for(i=0;i<n;i++)
    {
        ts=ts+a[i];
        a[i]=-a[i];
    }
    
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cs=cs+a[i];
        if(cs<0)
        {
            cs=0;
        }
        mx=max(mx,cs);
    
    }   
    
    int as=ts+mx;
    cout<<max(mx,as)<<endl;
    return 0;
}
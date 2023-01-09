#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n,maxn=0,minn=INT_MAX,ind=-1;
    cin>>n;
    int a[n];
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(key==a[i])
        {
            ind=i+1;
        }
        if(maxn<a[i])
        {
            maxn=a[i];
        
        }
        minn=min(minn,a[i]);
    }
    printf("%d %d %d",minn,maxn,ind);
    return 0;
}
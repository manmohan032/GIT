#include <iostream>
using namespace std;

int prep()
{
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for (i=1;i<1e4;i++)
    { 
        int p=0;
        for(j=0;j<n;j++)
        {
            if(a[j]>-1&&a[j]==i)
            p++;    
        }
        if(p==0)
        {
            printf("%d\n",i);
            return 0;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        prep();
        t--;
    }


    return 0;
}
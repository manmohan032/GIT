#include <iostream>
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
    int pr=0,n1=-1,f;
    for(i=0;i<n;i++)
    {
        int r=0;    
        for(j=0;j<n;j++)
        {
             if(a[i]==a[j])
             {
                r++;
                
             }  

        }
        if(pr<r)
        {
            pr=r;
            n1=a[i];
            f=i+1;
        }
    }
    cout<<n1<<f;
    return 0;
}
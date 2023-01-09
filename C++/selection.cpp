#include<iostream>
using  namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        int m=i;
        for(j=i+1;j<n;j++)
        
            if(a[m]>a[j])
            {
                m=j;
            }

        
        int t = a[m];
        a[m]=a[i];
        a[i]=t;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}
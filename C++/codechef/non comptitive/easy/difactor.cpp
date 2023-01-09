#include<iostream>
using namespace std;

int main()
{
    int n,i,c=0;
    cin>>n;
    int ar[n];
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {    
            ar[c]=i;
            c++;
        }
    }
    cout<<c<<endl;
    for(i=0;i<c;i++)
    {
        cout<<ar[i]<<" ";
    }

    
    return 0;
}
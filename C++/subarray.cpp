#include<iostream>
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
    int s1=0;
    for(i=0;i<n;i++)
    {  int s=0;

        for(j=i;j<n;j++)
        {
            s+=a[j];

            
        }
        if(s>s1)
        {
            s1=s;
        }
    }
    cout<<s1;

}
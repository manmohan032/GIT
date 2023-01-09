#include<iostream>
using namespace std;

int main()
{
    int n,t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int r=0;
        for(int i=n;i!=0;i=i/10)
        {
            r=r*10+i%10;
        }
        cout<<r;
    }
    
    return 0;
}
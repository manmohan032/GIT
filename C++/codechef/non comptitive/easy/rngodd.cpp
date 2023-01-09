#include<iostream>
using namespace std;

int main()
{
    int l,r,i;
    cin>>l>>r;
    for(i=l;i<=r;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
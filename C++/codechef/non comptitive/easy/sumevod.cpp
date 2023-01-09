#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ce=0,co=0,e=1,o=1,s1=0,s2=0;
    while(ce!=n)
    {
        if(e%2==0)
        {
            s1+=e;
            ce++;
        }
        e++;
    }
    while(co!=n)
    {
        if(o%2!=0)
        {
            s2+=o;
            co++;
        }
        o++;
    }
    cout<<s2<<" "<<s1;
    return 0;
}
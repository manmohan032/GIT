#include<iostream>
using namespace std;

int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    if((a+b+c)==180.0&&(a>0&&b>0&&c>0))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int i,t,j;
    cin>>t;
    while(t--)
    {
        string e,s;
        cin>>e;
        int l=e.length();
        s=e.substr(0,l/2);
        e=e.substr(l-l/2,l/2);
        sort(s.begin(),s.end());
        sort(e.begin(),e.end());
        if(s==e)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
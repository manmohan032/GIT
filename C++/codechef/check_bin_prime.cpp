#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int c=1;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='1')
            {
                cout<<"Yes"<<endl;
                c=0;
                break;
            }
        }
        if(c)
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
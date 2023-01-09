#include<iostream>
#include<string>
using namespace std;

char win(char a,char b)
{
    if(a=='S')
    {
        if(b=='R')
        {
            return 'R';
        }
        else
        {
            return a;
        }
    }
    else if(a=='R')
    {
        if(b=='P')
        {
            return 'P';
        }
        else
        {
            return a;
        }
    }
    else
    {
        if(b=='S')
        {
            return 'S';
        }
        else
        {
            return a;
        }
    }
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s, n="";
        int nw;cin>>nw;
        cin>>s;
        int i=0;
        char c=s[nw-1];
        while (s[i]!=c)
        {
            i++;
            cout<<"her";
            n=n+(s[i],s[i+1]);
        }
        for(;i<nw-1;i++)
        {
            cout<<"e";
            n+=s[i];
        }
        cout<<n<<endl;
    }
    return 0;
}
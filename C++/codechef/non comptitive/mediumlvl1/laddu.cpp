#include<iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int t=0,i,a,l,p,r;
        string s;
        cin>>a;
            cin>>s;
            if(s=="INDIAN")
            {
                l=200;
            }
            else
            {
                l=400;
            }
        while(a--)
        {
            cin>>s;
            if(s=="CONTEST_WON")
            {
                cin>>r;
                if(r<=20)
                    t+=20-r;
                t+=300;
            }
            else if(s=="TOP_CONTRIBUTOR")
            {
                t+=300;
            }
            else if(s=="BUG_FOUND")
            {
                cin>>p;
                t+=p;
            }
            else
            {
                t+=50;
            }
        }
        cout<<t/l<<endl; 
    }
    return 0;
}
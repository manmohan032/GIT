#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==1)
        {
            cout<<b<<endl;
        }
        else if(a==2)
        {
            cout<<0<<" "<<b<<endl;
        }
        else if(b==1)
        {
            int n=0,i=0;
            if(a%4==0)
            {
                i=1;
                cout<<i<<" ";
                i+=1;
                while(n!=a&&xo!=b)
                {
                    cout<<i<<" ";
                    xo=xo^i;
                    i+=2;
                }
            }
            else
            {
                i=0;
                for(i)
            }
        }
        else
        {
            int xo=0,i;
            for(i=0;i<a-1;i++)
            {
                cout<<i<<" ";
                xo=xo^i;
            }
            int lst=i;
            while(xo^lst!=b)
            {
                xo=xo^lst;
                lst++;
            }
            cout<<lst<<endl;
        }
    }
    return 0;
}
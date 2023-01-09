#include<iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int d=1;
        int dis=0;
        for(int i=1;i<6;i++)
        {
            if((n-dis)>d)
            {
                //cout<<"here";
                dis=dis+d;
                d++;
            }
            if(i==5&&(n-dis)>d)
            {
                d=11;
                //cout<<d;
            }
        }
        if(d==11)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        string s="";
        if(n>m)
        {
            n=n-m;//this to print hills if left any 
            while(m!=0)
            {
                m--;
                s+="01";
            }
            while(n!=0)
            {
                n--;
                s+="010"; 
            }
        }
        else if(n<m)
        {
            m=m-n;//this to print valleys if left any 
            while(n!=0)
            {
                n--;
                s+="10";
            }
            while(m!=0)
            {
                m--;
                s+="101"; 
            } 
        }
        else
        {
            while(n!=-1)
            {
                n--;
                s+="01";
            }
        }
        cout<<s.size()<<endl;
        cout<<s<<endl;
    }
    return 0;
}
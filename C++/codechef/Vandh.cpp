#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t!=0)
    {
        t--;
        int n,i,m;
        cin>>n>>m;
        string s="";
        int a=n*m,ans;
        if(a==0)
        {
            ans=3;
            
            if(m==0)
            {
                
                for(i=0;i<ans;i++)
                {
                    s+= to_string(i%2);
                }
            
            }
            else if(n==0)
            {
                
                for(i=1;i<=ans;i++)
                {
                    s+= to_string(i%2);
                }
            
            }
        }
        if(n>m&&a!=0)
        {
            ans=n*2+1;
            
            for(i=0;i<ans;i++)
            {
                s+= to_string(i%2);
            }
            
        }
        else if(n<m&&a!=0)
        {
            ans+=1;
            
            for(i=1;i<=ans;i++)
            {
                s+= to_string(i%2);
            }
            
        }
        else if(n==m)
        {
            ans=n*2+2;
            
            for(i=0;i<ans;i++)
            {
                s+= to_string(i%2);
            }
            
        }
        cout<<s.length()<<endl;
        cout<<s<<endl;       
    }
    return 0;
}
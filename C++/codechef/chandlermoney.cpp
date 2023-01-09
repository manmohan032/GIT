#include<iostream>
#include<algorithm>
#include<string>
#include<climits>
using namespace std;

void ks()
{
    string n;
    int k;cin>>n>>k;
    int c=0;
    sort(n.begin(),n.end());
    
    while(k>=1&&n[0]!=9)
    {
        for(int i=0;i<(int)n.size();i++)
        {
            if(k>=1&&n[i]!='9')
            {
                n[i]=n[i]+1;
                k=k-1;
            }   
        }
        
    }
    
    int ans=1;
    for(int i=0;i<(int)n.size();i++)
    {
        ans*=(n[i]-'0');
    }
    cout<<ans<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {

        ks();

    }
}
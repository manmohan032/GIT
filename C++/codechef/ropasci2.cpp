#include<iostream>
#include<vector>
#include<string>
#include<cassert>
using namespace std;

char win(char a,char b)
{
    if(a==b){ return a;}
    else if(a=='R'&&b=='P' || a=='P'&&b=='R'){ return 'P';}
    else if(a=='R'&&b=='S' || a=='S'&&b=='R'){ return 'R';}
    else if(a=='P'&&b=='S' || a=='S'&&b=='P' ){ return 'S';}
    else{ assert(false);}
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        
        vector <char> w_r(n+1);
        vector <char> w_p(n+1);
        vector <char> w_s(n+1);
        
        vector <char> ans(n+1);

        ans[n]=s[n-1];
        
        w_r[n]=win('R',s[n-1]);
        w_p[n]=win('P',s[n-1]);
        w_s[n]=win('S',s[n-1]);

        for(int i=n-1;i>=1;i--)
        {
            char r_res=win('R',s[i-1]);
            if(r_res=='R')
            {
                w_r[i]=w_r[i+1];
            }
            else if(r_res=='P')
            {
                w_r[i]=w_p[i+1];
            }
            else{
                w_r[i]=w_s[i+1];
            }

            char p_res=win('P',s[i-1]);
            if(p_res=='R')
            {
                w_p[i]=w_r[i+1];
            }
            else if(p_res=='P')
            {
                w_p[i]=w_p[i+1];
            }
            else{
                w_p[i]=w_s[i+1];
            }

            char s_res=win('S',s[i-1]);
            if(s_res=='R')
            {
                w_s[i]=w_r[i+1];
            }
            else if(s_res=='P')
            {
                w_s[i]=w_p[i+1];
            }
            else
            {
                w_s[i]=w_s[i+1];
            }

            if(s[i-1]=='R')
            {
                ans[i]=w_r[i+1];
            }
            else if(s[i-1]=='P')
            {
                ans[i]=w_p[i+1];
            }
            else if(s[i-1]=='S')
            {
                ans[i]=w_s[i+1];
            }
        }
        for(int i=1;i<=n;i++)
        {
            cout<<ans[i];
        }
        cout<<endl;
    }   
    return 0;
}
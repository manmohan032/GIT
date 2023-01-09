#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string ans="No";
        int xk,yk,x1,y1,x2,y2;
        cin>>xk>>yk>>x1>>y1>>x2>>y2;
        if(!(xk==1||xk==8||yk==1||yk==8))
        {
            ans=="No";
        }
        else
        {
             if(xk==1&&(x1==2||x2==2)&&(y1!=y2))
             {
                if(abs(yk-y1)>1&&abs(yk-y2)>1)
                {
                    ans="YES";
                }
            }
            else if(xk==8&&(x1==7||x2==7)&&(y1!=y2))
             {      
              
                if(abs(yk-y1)>1&&abs(yk-y2)>1)
                {
                    ans="YES";
                }
             }
             else if(yk==8&&(y1==7||y2==7)&&(x1!=x2))
             {
                
                if(abs(xk-x1)>1&&abs(xk-x2)>1)
                {
                    ans="YES";
                }
            }
            else if(yk==1&&(y1==2||y2==2)&&(x1!=x2))
            {
                
                if(abs(xk-x1)>1&&abs(xk-x2)>1)
                {
                    ans="YES";
                }
            }
        
        }
        cout<<ans<<endl;
    }
    return 0;
}
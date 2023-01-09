#include<iostream>
using namespace std;

int iscorner(int c)
{
    int c2=2,c3=3,d2=2,d3=3;
    if(c==2||c==3) return 1;
    while(c2<=c || c3<=c)
    {
        c2+=d2;
        c3+=d3;
        if(c2==c) return 1;
        d2++;
    }
    
    return 0;
}
int ismid(int s)
{
    int c=1,d=4;
    if(s==c)
    {return 1;}
    while(c<=s)
    {
        
        c=c+d;
        if(c==s)
        {
            return 1;
        }
        d+=4;
    }
    
    return 0;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int s,e;cin>>s>>e;
        int n=0;
        int c=2,cs=s;

        if(s<e)
        {
            while(c<s)
            {
                c+=1;
            }
            s=s+c;
            while(s<e)
            {
                c+=1;
                s+=c;
                
                n++;
            }
        }
        if(ismid(cs)&&ismid(e)){ n=n*2;}
        else if(!iscorner(e)&&iscorner(cs)|| !iscorner(cs)&&iscorner(e)) {n=n+1;}
        else if(!iscorner(e)&&!iscorner(cs)) {n=n+2;}
        cout<<n<<endl;
    }
    return 0;
}
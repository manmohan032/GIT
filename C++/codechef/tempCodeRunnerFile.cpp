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
        else
        {
            int n=0,num=a+b+1,xo=0^num;
            while(n!=a)
            {
                if(n==a-1)
                {
                    int i;
                    for(i=0;i!=a+b+1;i++)
                    {
                        if((xo^i)==b)
                        {
                            cout<<i<<endl;
                            break;
                        }
                    }
                    if((xo^i)==b)
                    {
                        break;
                    }
                    for(i=num+1;i!=500000;i++)
                    {
                        if((xo^i)==b)
                        {
                            cout<<i<<endl;
                            break;
                        }
                    }
                    break;
                }
                else
                {
                    cout<<num<<" ";
                    num++;
                    if(n!=a-2)
                        xo=xo^num;
                }
                n++;
            }
        }
    }
    return 0;
}
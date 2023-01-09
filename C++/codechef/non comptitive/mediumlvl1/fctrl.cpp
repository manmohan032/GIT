#include<iostream>
using namespace std;

int main()
{
    int i,t,f;
    cin >>t;
    while(t--)
    {
        f=5;
        int n,c=0;
        cin>>n;
        while((n/f)>0)
        {
            
            c=c+(n/f);
            f=f*5;
        }

        cout<<c<<endl;
    }

    return 0;
}
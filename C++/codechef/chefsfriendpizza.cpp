#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K;
        cin>>N>>K;
        int p;
        while ((p*K)%N==0)
        {
            p++;
        }
        
        cout<<p<<endl;
    }
}
        
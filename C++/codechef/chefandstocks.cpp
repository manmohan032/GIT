#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int S,A,B,C;
        cin>>S>>A>>B>>C;
        float a=S*(100+C)/100;
        if(a>=A&&a<=B)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
}
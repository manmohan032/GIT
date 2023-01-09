#include<iostream>
using  namespace std;

int main()
{
    int i,n;
    cin>>n;
    char c[n+1];
    
    cin>>c;//input
    
    int t=0;
    while(t!=n)
    {
        cout<<c[t];//output
        t++;
    }
}
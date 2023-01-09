#include<iostream>
using namespace std;

int assend(int n,int s)
{
    
    if(s==n)
    {
        cout<<s<<" "<<endl;
        return 0;

    }
    cout<<s<<" ";
    return assend(n,s+1);
}
int decend(int n)
{
    if(n==0)
    {
        cout<<n<<" "<<endl;
        return 0;

    }
    cout<<n<<" ";
    return decend(n-1);
}

int main()
{
    int n;
    cin>>n;
    
    decend(n);
    assend(n,0);
}
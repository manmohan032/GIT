#include<iostream>
using namespace std;

int power(int a,int n)
{
    if(n==1)
    {
        return a;
    }
    int p=power(a,n/2);
    if(n%2==1)
    {
        return a*p*p;
    }
    return p*p;
}
int main()
{
    cout<<power(6,11);
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j;
        long long int k;
        cin>>k;
        cin>>i>>j;
        long long int n=i*10+j;
        int d=(i+j)%10;

        for(i=0;i<k-2;i++)
        {
            n=n*10+d;
            d=(n*2)%10;
        }
        if(n%3==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(((i+j)%4==0)||(i==2&&(i+j)%4==2))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
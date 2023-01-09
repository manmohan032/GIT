#include<iostream>
using namespace std;

int main()
{
    int i,j,n,m,k;
    cin>>n>>m;
    cin>>k;
    int a[n][m];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    
    bool f= false;
    int r=0,c=m-1;
    //cout<<"1"<<target;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        if(k==a[i][j])
        {
            //cout<<"2";
            f=true;
        }
        }
    }
    if(f)
    {
        cout<<"found";
    
    }
    else{
        cout<<"not found";
    }
    return 0;
}
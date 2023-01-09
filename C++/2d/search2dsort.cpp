#include<iostream>
using namespace std;

int main()
{
    int i,j,n,m,target;
    cin>>n>>m;
    cin>>target;
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
    while (r<n and c>=0)
    {
        if(target==a[r][c])
        {
            //cout<<"2";
            f=true;
        }
        else if(a[r][c]>target)
        {
            c--;
        }
        else if(a[r][c]<target)
        {
            r++;
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
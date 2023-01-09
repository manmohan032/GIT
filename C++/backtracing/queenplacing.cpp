#include<iostream>
using namespace std;

bool issafe(int**arr,int x,int y,int n)
{
    for(int i=0;i<x;i++)
    {
        if(arr[i][y]==1)
        {
            return false;
        }
    }
    int row=x;
    int col=y;
    while(row>0&&col>0)
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col--;
    }

    row=x;
    col=y;
    while(row>0&&col<n)
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col--;
    }

}
bool queen(int**arr,int x,int y,int n)
{
    if(x>=n)
    {
        return true;
    }
    
    if(issafe(arr,x,y,n))
    {
        arr[x][y]=1;
        if(queen(arr,x+1,y,n))
        {
            return true;
        }
        if(arr,x,y+1,n)
        {
            return true;
        }
        return false;
    }
    return false;

}
int main()
{
    int n;
    cin>>n;

    int** arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }


    for(int i=0;i<n;i++)
    {

        for( int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }

    


    if(queen(arr,0,0,n))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
                    
            }
            cout<<endl;
        }
    
    else
    {
        cout<<"false";
    }
    return 0;
}

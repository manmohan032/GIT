#include <iostream>
using namespace std;

int main()
{
    int m;
    cout<<"enter no. of rows"<<endl;
    cin>>m;
    int n;
    int **arr=new int*[m];
    int *col=new int[m];
    cout<<"enter every collumn size 1-m respectively"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>col[i];
        arr[i]=new int[col[i]];
    }
    cout<<"enter element "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<col[i];j++)
            cin>>arr[i][j];
    }
        cout<<endl;
        cout<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<col[i];j++)
        {    cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
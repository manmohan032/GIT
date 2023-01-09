#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,q;
    cin>>n;
    cin>>q;
    vector<vector<int>> vect(n);

    for(int i=0;i<n;i++)
    {
        int c;
        cin >>c;
        vect[i]= vector<int>(c);
        for(int j=0;j<c;j++)
        {
            int e;
            cin>>e;
            vect[i][j]=e;
        }
    }
    for(int i=0;i<q;i++)
    {
        int r,c;
        cin>>r>>c;
        cout<<vect[r][c];
    }
    return 0;
}   
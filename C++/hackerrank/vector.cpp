#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,i,j;
    cin>>n>>q;
    vector<vector<int>> a;
    for(i=0;i<n;i++)
    {
        int k;
        cin>>k;
        
        a[i] = vector<int>(k);
        for(j=0;j<k;j++)
        {
            cin>>a[i][j];
            
        }
    }
    for(i=0;i<n;i++)
    {
        
    }
    for(i=0;i<q;i++)
    {
        int r,c;
        cin>>r>>c;
        cout<<a[r][c]<<endl;
    }
    return 0;
}

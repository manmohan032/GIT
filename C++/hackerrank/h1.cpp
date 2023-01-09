#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template <class m>
m input(m &n)
{
    vector<m> vect;
    for(int i=0;i<n;i++)
    {
        m e;
        cin >>e;
        vect.push_back(e);    
        
    }
    int q;
    cin>>q;
    
    vect.erase(vect.begin()+q);
    
    int a,b;
    cin>>a>>b;
    vect.erase(vect.begin()+a,vect.begin()+b);
    
    for(int i=0;i<vect.size();i++)
    {
        cout<<vect[i];
    }
    return 0;
}
int main() {
    int n;
    cin>>n;
    input(n);   
    
}

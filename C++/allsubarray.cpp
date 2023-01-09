#include <iostream>
#include<string>
using namespace std;
 
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        string str="";
        for(j=i;j<n;j++)
        {
            str = to_string(a[j])+" ";
            cout<<str;
        }
        cout<<str<<endl;
    }
    return 0;
}
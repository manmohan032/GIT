#include<iostream>
#include<string>
using namespace std;

void reverse(string st)
{
        if(st.length()==0)
    {
        return;
    
    }
    reverse(st.substr(1));
    cout<<st[0];
}
int main()
{
    string st;
    getline(cin,st);
    
    reverse(st);
}
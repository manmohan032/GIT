#include<iostream>
#include<string>
using namespace std;

void replacepi(string st)
{
    if(st.length()==0)
    {
        return;
    
    }
    if (st[0]=='p'&& st[1]=='i')
    {
        cout<<"3.14";
        replacepi(st.substr(2));
    }
    else
    {
        cout<<st[0];
        replacepi(st.substr(1));
    }
}
int main()
{
    string st;
    getline(cin,st);
    
    replacepi(st);
}
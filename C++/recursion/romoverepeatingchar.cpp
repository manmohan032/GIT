#include<iostream>
#include<string>
using namespace std;

void remove(string s)
{
    if(s.length()==0)
    {
        
        return ;
    }
    char ch= s[0];
    if(ch==s[1])
    {
        cout<<"1";
        remove(s.substr(1));
    }
    
        cout<<ch;
        remove(s.substr(1));
    
}
int main()
{
    remove("aaabasjsj");
}
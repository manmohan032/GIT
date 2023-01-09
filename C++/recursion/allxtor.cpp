#include<iostream>
#include<string>

using namespace std ;

string shiftx(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    
    char ch=s[0];
    string ans =shiftx(s.substr(1));
    if(ch=='x')
    {
        return (ans+ch);
    }

    return (ch+ans);//appending the char and string

    
}
int main()
{
    string s;
    
    getline(cin,s);

    cout<<shiftx(s);
}
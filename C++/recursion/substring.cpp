
#include<iostream>
#include<string>

#include<algorithm>
using namespace std ;

string remdup(string s)
{
    if(s.length()==0)
    {
        return "";
    }
        
    char ch=s[0];
    string ans =remdup(s.substr(1));
    if(ch==ans[0])
    {
        return ans;
    }

    return (ch+ans);//appending the char and string

    
}
int main()
{
    string s="ABC";
    
    getline(cin,s);
    sort(s.begin(),s.end());
    cout<<remdup(s);
}


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
    string s;
    
    getline(cin,s);
    sort(s.begin(),s.end());
    cout<<remdup(s);
}

//non working code

/*#include<iostream>
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
}*/
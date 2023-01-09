#include<iostream>
#include<string>
using namespace std;

void print(string s,string p)
{
    if(s.length()==0)
    {
        cout<<p<<endl;
        return;
    }
    for(int i=0;i<s.length();i++)
    {
        char ch = s[i];

        string news = s.substr(0,i)+s.substr(i+1);
        print(news,p+ch);
    }
}
int main()
{
    string str ="abc";
    print(str,"");
}

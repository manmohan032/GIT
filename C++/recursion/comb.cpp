#include<iostream>
#include<string>
using namespace std;
string sa[]={"","","abc","def","ghi"};

void comb(string s1,string ans)
{
    if(s1.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }

    char ch= s1[0];
    string ros =s1.substr(1);
    string code =sa[ch-'0'];
    for(int i=0;i<code.length();i++)
    {
        comb(ros,ans+code[i]);
    }
}
int main()
{
    comb("23","");
}
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
    for(int i=0;i<s1.length();i++)
    {
    char ch= s1[i];
    string ros =s1.substr(0,i)+s1.substr(i+1);

    comb(ros,ans+ch);
    }
}
int main()
{
    comb("abc","");
}
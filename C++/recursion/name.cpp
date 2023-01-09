#include<iostream>
#include<string>
using namespace std;

string name(string nam)
{
    if(nam.length()>0)
    {
        name(nam.substr(1));
        cout<<nam<<endl;
        name(nam.substr(1));
    }
    return "";
}
int main()
{
    name("shiv");
    return 0;
}
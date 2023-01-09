#include<iostream>
#include<string>
using namespace std;

int main ()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    cout<<s1<<endl;
    cout<<s2<<endl;

    s1.append(s2);//s1+=s2; also use addition for same operation

    cout<<s1<<endl;

    return 0;
}
#include<iostream>
#include<string>
using namespace std;

int main ()
{
    string st1,st2;
    getline(cin,st1);
    getline(cin,st2);

    cout<<st1<<endl;
    cout<<st2<<endl;

    st2.erase(3, st2.length()-3);//will give us first three word
        cout<<st2<<endl;
    
    st1.clear();
    st1.insert(0,"manmohan");
    cout<<st1.find("man")<<endl;
    cout<<st1.substr(3,st1.length()-1);
   
    return 0;

}
#include<iostream>
#include<string>
using namespace std;

int main ()
{
    string st1,st2;
    getline(cin,st1);
    getline(cin,st2);

    for(int i=0;i<st1.length();i++)
    {
        cout<<st1[i]<<endl;// to print each correct present in st1
    }


    st2.clear();
    if(st2.empty())
    {
        cout<<"empty strinh"<<st2.empty()<<endl;//will print nothing because  clear command earsed everything from string line st2.
    }
    return 0;

}
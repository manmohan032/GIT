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

    cout<<st1.compare(st2)<<endl;//will give u -1 if st1 greater than st2 and 1 if st1 is smaller than st2 and 0 if equal
    cout<<st2.compare(st1);
    return 0;

}
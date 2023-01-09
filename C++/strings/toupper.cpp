#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main ()
{
    string st1,st2;
    getline(cin,st1);
    getline(cin,st2);

    cout<<st1<<endl;
    cout<<st2<<endl;

    transform(st1.begin(), st1.end(), st1.begin(), :: toupper);

    cout<<st1;

    return 0;

}
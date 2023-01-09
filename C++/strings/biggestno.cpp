#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main ()
{
    string st1,st2;
    getline(cin,st1);
    
    sort(st1.begin(),st1.end(),greater<int>());

    cout<<st1<<endl;


    return 0;

}
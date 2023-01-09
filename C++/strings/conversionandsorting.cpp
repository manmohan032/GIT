#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main ()
{
    string st1,st2;
    getline(cin,st1);
    getline(cin,st2);
    int p;
    cin>>p;
    cout<<st1<<endl;
    cout<<st2<<endl;

    int n=stoi(st1);

    cout<<n<<endl;
    
    string st=to_string(p);
    
    

    
    sort(st.begin(), st.end());
    cout<<st<<endl;

    

    return 0;

}
#include<iostream>
using namespace std;
 
int main()
{   
    int n,i=0;
    cin>>n;
    char c[n+1];

    cin>>c;
    bool f= false;
    int s=0,e=n-1;
    while(s!=e)
    {
        if(c[s]==c[e])
        {
            s++;
            e--;
            f= true;
        }
        else
        { 
            cout<<"not";
            return 0;
        }

    }
    if(f)
    {
        cout<<"palindrome";

    }

    return 0;
}
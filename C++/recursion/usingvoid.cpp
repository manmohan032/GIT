#include<iostream>
using namespace std;

void assend(int n)
{
    
    if(n==0)
    {
        cout<<n<<" "<<endl;
        return;

    }
    assend(n-1);
    cout<<n<<" ";
   
}
void decend(int n)
{
    if(n==0)
    {
        cout<<n<<" "<<endl;
        return;

    }
    cout<<n<<" ";
    decend(n-1);
}

int main()
{
    int n;
    cin>>n;
    
    decend(n);
    assend(n);
}
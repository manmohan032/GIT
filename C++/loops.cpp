#include <iostream>
using namespace std;

int main()
{
    int a;
    int sum=0;
    cin>>a;
    
    //for loop
    for(int b=1;b<=a;b++)
    {
        sum+=b;
    }
    cout<<sum<<endl;

    //while loop
    while (a>0)
    {
        cin>>a;

    }
    cout<<a;

    //do while loop
    do
    {
        cin>>a;
    } while (a<0);
    

    return 0;
}
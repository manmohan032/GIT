#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main()
{
    int a=1,b=20;
    cout<<a<<" "<<b;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}
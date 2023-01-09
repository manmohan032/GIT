#include<iostream>
using namespace std;

class check
{
    int a,b;
    public :
    void get_data(int i,int j){
        a=i;
        b=j;
    }
    void print()
    {
        cout<<"multiplication of "<<a<<" from "<<b<<" is "<<a*b<<endl;
    }
    
};
int main()
{
int n;
cout<<"enter how many multiplication you want to check"<<endl;
cin>>n;
check *ptr =new check[n];
for(int i=0;i<n;i++)
{
    int a,b;
    cin>>a>>b;
    ptr[i].get_data(a,b);
}
for(int i=0;i<n;i++)
{
    (*(ptr+i)).print();
}
}
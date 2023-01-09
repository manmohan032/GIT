#include<iostream>
using namespace std;
void sayDig(int n)
{
    if(n==0)
    {
        return;
    }
    sayDig(n/10);
    if(n%10==1)
        cout<<"One"<<" ";
    if(n%10==2)
        cout<<"Two"<<" ";
    if(n%10==3)
        cout<<"Three"<<" ";
    if(n%10==4)
        cout<<"Four"<<" ";
    if(n%10==5)
        cout<<"Five"<<" ";
    if(n%10==6)
        cout<<"Six"<<" ";
    if(n%10==7)
        cout<<"Seven"<<" ";
    if(n%10==8)
        cout<<"Eight"<<" ";
    if(n%10==9)
        cout<<"Nine"<<" ";
    if(n%10==0)
        cout<<"Zero"<<" ";
}
int main(){
    int arr[]={1,2,3,4,5};
    sayDig(432);
    return 0;
}
#include<iostream>
using namespace std;



bool  reverse(string arr,int s,int e)
{
    if(s>=e)
    {
        return true;
    }
    if(arr[s]==arr[e])
    {
        return true&&reverse(arr,s+1,e-1);
    }
    else
        return false;

}
int main(){
    char a[]="manmohan";
    string b="maaaaaan";
    cout<<reverse(b,0,7);
    return 0;
}
#include<iostream>
using namespace std;



string  reverse(string arr,int s,int e)
{
    if(s>e)
    {
        return arr;
    }
    char t=arr[s];
    arr[s]=arr[e];
    arr[e]=t;
    return reverse(arr,s+1,e-1);

}
int main(){
    char a[]="manmohan";
    string b="manmohan";
    b=reverse(b,0,7);
    cout<<b;
    return 0;
}
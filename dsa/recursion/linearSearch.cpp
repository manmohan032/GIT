#include<iostream>
using namespace std;
bool isPresent(int *arr,int n,int size)
{
    if(size==0)
    {
        return false;
    }
    if(arr[size-1]==n)
        return true;
    return  isPresent(arr,n,size-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<isPresent(arr,4,5);
    return 0;
}
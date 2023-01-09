#include<iostream>
using namespace std;
bool isSorted(int *arr,int n,int i)
{
    if(i==n-1)
    {
        return true;
    }
    bool ans=false;
    if(arr[i]<arr[i+1])
        ans = true;
    return ans && isSorted(arr,n,i+1);
}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<isSorted(arr,5,0);
    return 0;
}
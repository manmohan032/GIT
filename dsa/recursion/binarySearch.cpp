#include<iostream>
using namespace std;
bool BS(int *arr,int n,int s,int e)
{
    if(s>e)
    {
        return false;
    }
    int mid=(s+e)/2;
    if(mid[arr]==n)
        return true;
    else if(mid[arr]<n)
        return BS(arr,n,mid+1,e);
    return BS(arr,n,s,mid-1);

}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<BS(arr,8,0,5);
    return 0;
}
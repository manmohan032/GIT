#include<iostream>
using namespace std;
void SS(int *arr,int k,int s)//selection Sort
{
    if(k==s)
    {
        return ;
    }
    int t=k;
    for(int i=k;i<s;i++)
    {
        if(arr[i]<arr[t])
        {
            t=i;
        }
    }
    swap(arr[t],arr[k]);
    SS(arr,k+1,s);
}
int main(){
    int arr[]={3,5,2,4,1};
    SS(arr,0,5);

    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    return 0;
}
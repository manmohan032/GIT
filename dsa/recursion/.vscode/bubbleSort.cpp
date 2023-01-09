#include<iostream>
using namespace std;
void BS(int *arr,int e)
{
    if(e==0)
    {
        return ;
    }
    for(int i=0;i<e;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    BS(arr,e-1);
}
int main(){
    int arr[]={3,5,2,4,1};
    BS(arr,5);

    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    return 0;
}
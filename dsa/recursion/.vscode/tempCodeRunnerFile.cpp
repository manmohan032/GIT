#include<iostream>
using namespace std;
void IS(int *arr,int k,int s)//selection Sort
{
    if(k-1==s)
    {
        return ;
    }
    int t=arr[k];
    int p=k-1;
    while(p>0)
    {
        if(t<arr[p])
        {
            arr[p+1]=arr[p];
            p--;
        }
        else
            break;
    }   
    arr[p+1]=t;
    
    IS(arr,k+1,s);
}
int main(){
    int arr[]={3,5,2,4,1};
    IS(arr,0,5);

    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    return 0;
}
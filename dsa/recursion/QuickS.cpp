#include<iostream>
using namespace std;
int QS(int *arr,int s,int e)//quick Sort
{
    
    int piv=arr[s],c=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<piv)
            c++;
    }
    int p=s+c;
    swap(arr[p],arr[s]);
    // s++;
    // cout1<<arr[s]<<endl;
    while(s<e)
    {
        if(arr[s]<piv)
        {
            s++;
        }
        if(arr[e]>piv)
            e--;
        if(arr[e]<arr[s])
        {   
            swap(arr[e],arr[s]);
            s++;
            e--;
        }
    
    }
    // cout<<arr[s]<<" "<<arr[k]<<endl;
    return p;
}
void quick(int arr[],int s,int e)
{
    if(s>e)
        return;
    int piv=QS(arr,s,e);
    quick(arr,s,piv-1);
    quick(arr,piv+1,e);


}
int main(){
    int arr[]={5,3,1,8,4,9};
    quick(arr,0,5);

    for(int i=0;i<=5;i++)
        cout<<arr[i]<<" ";
    return 0;
}
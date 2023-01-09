#include<iostream>
using namespace std;

bool issafe(int*arr,int n)
{
    for(int i=0;i<arr.length;i++)
    {
        if(arr[i]==n)
        {
            return false;
        }
    
    }
    return true;
}
void print(int*arr,int n)
{
    if(n==0)
    {
        return ;
    }
    for(int i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(issafe(arr,i+j))
            a[i+j];
            
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int*arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    print(arr,n);
}
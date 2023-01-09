#include<iostream>
using namespace std;
int binarysearch(int p[],int k,int n1)
{   
    int s=0;
    int e=n1;
    for(int l=0;l<n1;l++)
    {
        int mid=(e+s)/2;
        if(p[mid]==k)
        {
            return mid;
        
        }
        else if(p[mid]>k)
        {
            s=mid+1;
        }
        else
        {
            e = mid-1;
        }
    }

    return -1;
}
int main()
{
    int n,key;
    cin>>n;
    cin>>key;
    int j[n];

    for(int i=0;i<n;i++)
    {
        cin>>j[i];
    }
    cout<<binarysearch(j,key,n);

    return 0;
    
} 

// namespace std



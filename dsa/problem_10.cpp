#include<iostream>
using namespace std;
class sol
{
    public:
    int minjump(int arr[],int n)
    {
        int i,c=0,p=0,j=arr[0],mx=0;
        if(arr[0]==0)
        {
            return -1;
        }
        for(i=0;i<n;i++)
        {
            if(j!=0&&mx<arr[i])
            {
                p=i;
                mx=arr[i];
            }
            else
            {
                j--;
            }
            if(j==0&&mx==0)
            {
                return -1;
            }
            
        }
        return c;
    }
};
int main()
{
    
    int n,k,i;
    cin>>k>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sol ob;
    cout<<ob.minjump(arr,n);
    return 0;
}
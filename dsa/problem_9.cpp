#include<iostream>
using namespace std;
class sol
{
    public:
    void swap(int *a,int *b)
    {
        int t=*a;
        *a=*b;
        *b=t;
    }
    void q_sort(int arr[],int s,int e)
    {
        if(e-s<=0)
        {
            return ;
        }
        int i=s,j=e,p=arr[(s+e)/2];
        while(i<=j)
        {
            while(arr[i]<p)
            {
                i++;
                
            }
            while(arr[j]>p)
            {
                j--;
            }
            if(i<=j)
            {
                swap(&arr[i],&arr[j]);
                i++;
                j--;
            }
        }
        q_sort(arr,s,i-1);
        q_sort(arr,i,e);
        
    }
    int max(int a,int b)
    {
        if(a>b)
        {
            return a;
        }
        return b;
    }
    int min(int a,int b)
    {
        if(a<b)
        {
            return a;
        }
        return b;
    }
    int getMinDiff(int arr[], int n, int k) {
        q_sort(arr,0,n-1);
        int s=arr[0]+k;
        int l=arr[n-1]-k;
        int mi,ma,ans=arr[n-1]-arr[0];
        for(int i=0;i<n-1;i++)
        {
            mi=min(s,arr[i+1]-k);
            ma=max(l,arr[i]+k);
            cout<<mi<<" "<<ma<<endl;
            
            if(mi<0)
                continue;
            ans=ma-mi;
        }
        return ans;
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
    cout<<ob.getMinDiff(arr,n,k);   
    return 0;
}
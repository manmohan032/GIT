#include<iostream>
using namespace std;

class sol
{
    public:
    int kadanes_algo(int arr[],int n){
        int i,s=0,ps=0;
        for(i=0;i<n;i++)
        {
            s+=arr[i];
            if(s>ps)
            {
                ps=s;
            }
            if(s<0)
            {
                s=0;
            }
        }
        return s;
    }
};
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sol ob;
    cout<<ob.kadanes_algo(arr,n);
    return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;
class sol
{
    
    public:
    int find_duplicate(int arr[])
    {
        while(arr[0]!=arr[arr[0]])
        {
            int t= arr[0];
            arr[0]=arr[arr[0]];
            arr[t]=t;
        }
        return arr[0];
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
    cout<<ob.find_duplicate(arr);
    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.rbegin(),arr.rend());
        int c=0;
        bool con=true;
        while(con)
        {
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                //cout<<arr[i]<<endl;
                c++;
                arr[i]=arr[i]-1;
            }
            else{
                con=false;
            }
        }
        //cout<<"arhere"<<endl;
            
        }
        cout<<c<<endl;
    }
    return 0;
}
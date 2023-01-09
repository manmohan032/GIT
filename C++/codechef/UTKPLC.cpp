#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        t--;
        int i,j=0;
        char arr[3];
        for(i=0;i<3;i++)
        {
            cin>>arr[i];
        }
        char x,y;
        cin>>x>>y;
        for(i=0;i<3;i++)
        {
            if(arr[i]==x||arr[i]==y)
            {
                cout<<arr[i]<<endl;
                break;
            }
        }
        
    }
}
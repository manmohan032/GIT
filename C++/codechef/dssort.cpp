#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> arr(2*N);
        for(int i=0;i<2*N;i++)
        {
            int e;
            cin>>e;
            arr.push_back(e);
            
        }
        sort(arr.begin(),arr.end());
        int a=arr[0];
        for (int i = 1; i < 2*N; i++)
        {
            if(arr[i]!=a)
            {
                arr.erase(i);
            }
        }
        
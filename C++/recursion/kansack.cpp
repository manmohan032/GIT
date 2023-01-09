#include<iostream>
#include<climits>
using namespace std;

int ks(int value[],int weight[],int n,int w)
{
    if(n==0||w==0)
    {
        return 0;
    }
    if(weight[n-1]>w)
    {
        return ks(value,weight,n-1,w);
    }
    return max(ks(value,weight,n-1,w-weight[n-1])+value[n-1],ks(value,weight,n-1,w));

}
int main()
{
    int value[] ={100,50,150};
    int weight[] ={10,20,30};
    int w=50;
    cout<<ks(value,weight,3,w);

}
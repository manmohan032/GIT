#include<iostream>
using namespace std;

int tiles(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return tiles(n-1)+tiles(n-2);

}
int main()
{
    cout<<tiles(4);
}
#include<iostream>
using namespace std;

void print2(int f,int s,int n)
{
    if(0==n)
    {
        
        return;
    }
    int c=f+s;
    cout<<s<<" ";
    print2(s,c,n-1);


}
/*void print(int f,int s,int n)//to print fibonacci till n
{
    if(s>=n)
    {
        if(s==n)
        cout<<n;
        return;
    }
    int c=f+s;
    cout<<s<<" ";
    print(s,c,n);

}*/
int main()
{
    int n;
    
    cin>>n;
    //cout<<0<<" ";
    //print(0,1,n);
    cout<<0<<" ";
    print2(0,1,n-1);
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int s1=1,s2=5;
    for(i=1;i<=n;i++)
    {
    
        for(j=0;j<5;j++)
        {
            
            if(i%2==0)
            {
                cout<<s1<<" ";
                s1--;
            }
            else
            {
                cout<<s1<<" ";
                s1++;
            }
        }
        if(i%2!=0)
            s1+=4;
        else
            s1+=6;
        cout<<endl;
    }
    return 0;
}
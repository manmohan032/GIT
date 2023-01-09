#include<iostream>
using namespace std;

bool pen(int a[],int k,int n)
{
    int f=0;
    int l=n-1;
    while (l<f)
    {
        int s=a[f]+a[l];

        if(s==k)
        {
            cout<<"yes present at :"<<l<<" "<<f;
            return true;
        }
        else if(s>k)
        {
            l--;
        }
        else if(s<k)
        {
            f++;
        }
    }
    cout<<"not present";
    return false;

}

int main()
{
    int i,j,n,k;
    cin>>n;
    cin>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        int c=a[i];
        j=i-1;
        while (a[j]>c&&j>=0)
        {
            a[j+1]=a[j];
            j--;
            
        }
        a[j+1]=c;
    }

    
    pen(a,k,n);

    return 0;
}
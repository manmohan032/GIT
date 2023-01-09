#include<iostream>
#include<algorithm>
using namespace std;

int sum(int *a,int n)
{
    sort(a, a + n);
  
    // Find all possible permutations
    int s=0;
    
    do {
        for(int i=0;i<n;i++)
            s=s+a[i]*(i+1);
    } while (next_permutation(a, a + n));
    return s;
}
int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int a,i;
        cin>>a;
        int s=0;
        int ar[a];
        for(i=1;i<=a;i++)
        {
            ar[i-1]=i;
        }

        cout<<(sum(ar,a)/fact(a))<<endl;
    }
}
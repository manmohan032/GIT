#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int n,i,x,t=0,p=0;
	    cin>>n;
	    
	    int arr[n*10]={0};
	    arr[0]=1;
	    for(i=2;i<=n;i++)
	    {
			t=0;
	        for(int j=0;j<=p;j++)
	        {
	            x=arr[j]*i+t;
	            arr[j]=x%10;
	            t=x/10;
	        }
	        for(int j=t;j!=0;j=j/10)
	        {
	            arr[++p]=j%10;
	        }
	    }
	    for(i=p;i>=0;i--)
	        cout<<arr[i];
	 	cout<<endl;
	}
	return 0;
}

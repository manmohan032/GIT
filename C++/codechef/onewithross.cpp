#include <iostream>
using namespace std;

int main() 
{
	int t;cin>>t;
	while(t--)
	{
	    int n,x,k;cin>>n>>x>>k;
	    int ross[n];
	    int russ[n];
	    int i;
	    for(i=0;i<n;i++)
	    {
	        cin>>ross[i];
	        
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>russ[i];
	    }
	    int cnt=0;
	    for(i=0;i<n;i++)
	    {
	        if((abs(russ[i]-ross[i]))<=k)
            {
                cnt++;
            }
	    }
	     if(cnt>=x)
	     {
	         cout<<"Yes"<<endl;
	     }
	     else
	     {
	         cout<<"No"<<endl;
	     }
	}
	return 0;
}

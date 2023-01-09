#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
    
    
    int t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        
        lli p =1 , q;
        const lli mod = 998244353LL;
        if(n%2 == 0)
        
        if(n % 4 == 0){
            
            q = 1;
            
            p = n/4;
            p%= mod;
            
            p*= (n+1);
            p%= mod;
            
            p*= (n+1);
            p%= mod;
        }
        
        else {
            q = 2;
             p = n/2;
            p%= mod;
            
            p*= (n+1);
            p%= mod;
            
            p*= (n+1);
            p%= mod;
            
        }
        else {
            q = 1;
            
           
            p*= (n+1)/2;
            p%= mod;
            
            p*= (n+1)/2;
            p%= mod;
            
            p*= n;
            p%= mod;
        }
        
        lli inv = 0;
        
        if(q ==1){
            inv = 1;
        }
        else if(q==2){
            inv = 499122177;
        }
        
        lli ans;
        ans = p *inv;
        ans %= mod;
        cout<<ans<<endl;
    
        
    }
    return 0;
}
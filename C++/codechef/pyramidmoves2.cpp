#include<iostream>
#include<cmath>
using namespace std;

typedef long long int LLI;
typedef long long ll;

const LLI mod7 = 1e9 + 7;
const int MAXF = 1e5;

LLI fact [MAXF + 1];

LLI last_elem(LLI lvl)
{
    return ((lvl + 1)*lvl) / 2;
}


ll powmod(ll a, ll b, ll p){
    a %= p;
    if (a == 0) return 0;
    ll product = 1;
    while(b > 0){
        if (b&1){    // you can also use b % 2 == 1
            product *= a;
            product %= p;
            --b;
        }
        a *= a;
        a %= p;
        b /= 2;    // you can also use b &gt;&gt; 1
    }
    return product;
}

ll inv(ll a, ll p){
    return powmod(a, p - 2, p);
}

ll nCk(ll n, ll k, ll p){
    return ((fact[n] * inv(fact[k], p) % p) * inv(fact[n-k], p)) % p;
}



pair<LLI,LLI> get_lvl_idx(LLI n)
{
    LLI lvl =-1;
    LLI idx = -1;
    
    if(n==1)
    {
        return {1,1};
    }
    
    LLI st=2;
    LLI  end = 1LL + ceil(sqrt(2*n));
    while(st<=end)
    {
        lvl= (st+end)/2;
        if(last_elem(lvl)>=n&last_elem(lvl-1)<n)
        {
            break;
        }
        else if(last_elem(lvl)>n)
        {
            end = lvl - 1;
        }
        else
        {
            st = lvl + 1;
        }
    }
    
    idx = n - (lvl*(lvl-1))/2;
    return {lvl,idx};
}

int main() {
    // your code goes here
    fact[0]=1;
    fact[1]=1;
    for(int i=2;i<=MAXF;i++)
    {
        fact[i] = fact[i-1]*i % mod7;
    }
    
    
    int t;
    cin>>t;
    while(t--)
    {
        LLI s,e;
        cin>>s>>e;
        
        pair<LLI,LLI> res1, res2;
        res1 = get_lvl_idx(s);
        res2 = get_lvl_idx(e);
        
        LLI slvl = res1.first;
        LLI sidx = res1.second;
        LLI elvl = res2.first;
        LLI eidx = res2.second;
        LLI L = elvl - slvl;
        LLI K = eidx - sidx;
        LLI ans = -1;
        
        if(L<=0 || K<0 || K>L)
        {
            ans=0;
        }
        else
        {
            ans = nCk(L,K,mod7);
        }
        
        cout<<ans<<endl;
    }
    
    
    
    return 0;
}
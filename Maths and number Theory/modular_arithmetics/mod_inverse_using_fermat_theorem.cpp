#pragma GCC optimize("Ofast,inline,unroll-loops,fast-math")
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define mod 1000000007
#define mod1 998244353
#define INF LLONG_MAX
#define NINF LLONG_MIN
#define inf 1e18
#define all(v) v.begin(),v.end()
#define T ll test;cin>>test; while(test--)
#define rep(i,a,n) for(ll i=a;i<(long long)n;++i)
#define rep1(i,a,n) for(ll i=a;i<=(long long)n;++i)
#define repi(i,a,n) for(int i=a;i<=(int)n;++i)
#define repl(i,a,n) for(int i=a;i<(int)n;++i)
#define PI 3.141592653589793238510
#define en '\n'
#define MAX 100005
#define lesser_time ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug cout<<"HERE"<<en;
#define setbits(x)  __builtin_popcountll(x)
#define zrobits(x)  __builtin_ctzll(x)
#define ps(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define F first
#define S second
#define LB lower_bound
#define UB upper_bound
#define vc vector
#define vi vc<int>
#define mii unordered_map<int,int>
#define pql priority_queue<int>
#define pqs priority_queue<int,vi,greater<int>>
#define vll vector<long long>
#define pll pair<long long,long long>
#define pl pair<int,int>
#define eb emplace_back
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
using namespace std;
using namespace std::chrono;
void inout(){freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);}

ll mod_exp(ll x,ll n,ll M){
  ll res=1;
  while(n>0){
    if(n&1)
     res=(res*x)%M;
    x=(x*x)%M;
    n>>=1;
  }
  return res;
}

ll mod_inv(ll A,ll M){
  return mod_exp(A,M-2,M);
}

int main(){
    lesser_time;
    ll a,m;
    cin>>a>>m;
    ll b=mod_inv(a,m);
    cout<<b<<en;
return 0;
}

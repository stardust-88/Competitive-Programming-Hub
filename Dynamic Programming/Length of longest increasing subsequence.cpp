#pragma GCC optimize("Ofast,inline,unroll-loops,fast-math")
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define MOD 1000000007
#define MOD1 998244353
#define INF LLONG_MAX
#define NINF LLONG_MIN
#define inf 1e18
#define all(v) v.begin(),v.end()
#define T ll test;cin>>test; while(test--)
#define rep(i,a,n) for(ll i=a;i<(long long)n;++i)
#define rep1(i,a,n) for(ll i=a;i<=(long long)n;++i)
#define rep2(i,n,a) for(ll i=n;i>(long long)a;--i)
#define rep3(i,n,a) for(ll i=n;i>=(long long)a;--i)
#define repi(i,a,n) for(int i=a;i<=(int)n;++i)
#define repl(i,a,n) for(int i=a;i<(int)n;++i)
#define PI 3.141592653589793238510
#define en '\n'
#define MAX 100005
#define LESSTIME ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
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
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int>
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
int main(){
    LESSTIME;
    int n;
    cin>>n;
    int a[n+5];
    rep(i,0,n) cin>>a[i];
    int dp[n+5];
    repi(k,0,n)
    {
      dp[k]=1;
      repi(i,0,k)
      {
        if(a[i]<a[k])
        dp[k]=max(dp[k],dp[i]+1);
      }
    }
    cout<<dp[n-1];
return 0;
}

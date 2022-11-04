//patil_gm
#include<map>
#include<vector>
#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define itoc(c)  ((char)(((int)'0')+c))
#define ctoi(c)  ((int)(((int)c)-'0'))
#define endl '\n'
#define ll long long
#define lld long long double 
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define rloop(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define vec(ver, n)  vector<ll> ver(n); for (ll i = 0; i < n; i++) cin >> ver[i];
#define pii pair<ll,ll>
#define fr first
#define sc second
const long long INF=1e18;
const int32_t mod=1e9+7;
const int32_t MM=998244353;

ll dp[5005][5005];
vector<ll> v1,v2;
ll solve(ll i,ll j){
 
    if(i==v1.size()){
        return 0;
    }
 
    if(j==v2.size()){
        return 1e17;
    }
 
    if(dp[i][j]!=-1) return dp[i][j];
 
 
    ll ans = 1e18;
    ll nt = solve(i,j+1);
    ll t = abs(v1[i]-v2[j]) + solve(i+1,j+1);
 
    return dp[i][j]=min(t,nt);
 
 
}
signed main(){
    fastio
    ll n;
    cin>>n;
    vec(arr,n);
    int i=0;

loop(i,0,n){
    if(arr[i]==1){
     v1.push_back(i);
    }
    else{
        v2.push_back(i);
    }
}
 memset(dp,-1,sizeof(dp));
 cout<<solve(0,0)<<endl;

    return 0;
}
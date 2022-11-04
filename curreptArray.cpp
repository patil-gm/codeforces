//patil_gm
#include<map>
#include<vector>
#include<cmath>
#include<numeric>
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

void solve(){
   ll n;
   cin>>n;
   vec(arr2,n+2);
   sort(all(arr2));
   ll sum=0;
   loop(i,0,n){
    sum+=arr2[i];
   }
   if(sum==arr2[n]||sum==arr2[n+1]){
        loop(i,0,n){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
   }
   else{
    ll idx=-1;
    sum+=arr2[n];
    loop(i,0,n){
        if(sum-arr2[i]==arr2[n+1]){
            idx=i;
            // cout<<idx<<endl;
            break;
        }
    }
    if(idx==-1)cout<<-1<<endl;
    else{
        loop(i,0,n+1){
            if(i!=idx){
                cout<<arr2[i]<<" ";
            }
        }
        cout<<endl;
    }
   }


};

signed main(){
    fastio
    ll t=1;
cin>>t;
while(t--)solve();
    return 0;
}
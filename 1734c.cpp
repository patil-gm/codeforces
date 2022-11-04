//patil_gm
#include<map>
#include<vector>
#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long
#define lld long long double 
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define test ll t; cin >> t; while(t--) 
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

ll solve(string arr,ll n){
    vector<ll> temp;
    for(ll i=0;i<n;i++){
        if(arr[i]=='0'){
            temp.pb(i+1);
        }
    }
    if(temp.size()==0){
        return 0;
    }

    ll ans=0;
    for(int i=0;i<temp.size();i++){
         if(temp[i]==-1){
            continue;
         }
         else{
            ans+=temp[i];
         }
         
         for(int)
    }
  
    return ans;
}


signed main(){
    fastio
    test{
        ll n;
        cin>>n;
       string arr;
       cin>>arr;
        ll ans=solve(arr,n);    
        cout<<ans<<endl;  
    }  
    return 0;
}
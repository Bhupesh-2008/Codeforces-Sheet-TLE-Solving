#include <bits/stdc++.h>
using namespace std;

// Shorthand for common types and containers
using ll = long long;
using vi = vector<int>;
using vll = vector<ll> ;
using pii = pair<int, int>;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) ((int)(x).size())

int main() {
    fast_io; // Optimization for competitive programming

    int t = 0;
    cin >> t; 
    while (t--) {
        ll n=0,p=0;
        cin>>n>>p;
        vll a(n);
        vll b(n); 
        for(ll i=0; i<n;i++) cin>>a[i];
        for(ll i=0; i<n;i++) cin>>b[i];
        
        vector<pair<ll,ll>>pr(n);
        for(ll i=0;i<n; i++){
            pr[i]=make_pair(b[i],a[i]);
        }

        sort(pr.begin(),pr.end());

        ll ans=p;
        ll i=0;
        ll x=n;
        n--;
        while(n>0 && i<x){
            if(pr[i].first>=p) break;
            if(pr[i].second<=n){
                n-=pr[i].second;
                ans+=(pr[i].first* pr[i].second);
                i++;
            }
            else {
                ans= ans+(pr[i].first*(n));
                n=0;
            }
        }

        if(n>0) ans= ans+n*p;

        cout<<ans<<endl;
    }

    return 0;
}
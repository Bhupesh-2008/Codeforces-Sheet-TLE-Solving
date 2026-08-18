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
        ll n=0,x=0;
        cin>>n>>x;
        vll v(n);
        for(ll i=0; i<n; i++)cin>>v[i];
        vector<pair<ll,ll>> p(n);
        ll ans=0;
        for(ll i=0; i<n; i++){
            p[i].first=v[i]-x;
            p[i].second= v[i]+x;
        }

        ll l= p[0].first;
        ll r= p[0].second;
        for(ll i=0; i<n;i++){
            l= max(l,p[i].first);
            r= min(r,p[i].second);

            if(l>r){
                ans++;
                l= p[i].first;
                r= p[i].second;
            }
        }
        cout<<ans<<"\n";

    }

    return 0;
}
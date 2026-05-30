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
        ll n=0; cin>>n;
        vll v(n);
        for(ll i=0; i<n; i++) cin>>v[i];

        vll ans(n,0);
        ll cnt=0;
        ll a= INT_MAX;

        for(ll i=0; i<n; i++){
            cnt+= v[i];
            ll l= cnt/(i+1);
            a= min(a,l);
            ans[i]= a;
        }

        for(ll i=0; i<n ; i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
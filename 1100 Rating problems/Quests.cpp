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
        ll n=0,k=0;
        cin>>n>>k;
        vll a(n);
        vll b(n);
        for(ll i=0; i<n; i++) cin>>a[i];
        for(ll i=0; i<n; i++) cin>>b[i];

        ll ans=0;
        ll curr=0;
        ll best_b=0;
        for(ll i=0; i<min(n,k);i++){
            curr+= a[i];
            best_b = max(best_b, b[i]);
            ll k_left=k-i-1;
            ll score= curr+(k_left*best_b);

            ans= max(ans,score);
        }
        cout<<ans<<endl;
    }

    return 0;
}
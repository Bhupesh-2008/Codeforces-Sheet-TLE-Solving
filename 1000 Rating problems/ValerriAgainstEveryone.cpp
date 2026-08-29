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
        ll n=0;
        cin>>n;
        vll v(n);
        for(ll i=0; i<n; i++) cin>>v[i];

        sort(v.begin(),v.end());

        bool same=0;
        for(ll i=0 ;i<n;i++){
            if(v[i]==v[i+1]) {
                same=1;
                break;
            }
        }

        if(same==1) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
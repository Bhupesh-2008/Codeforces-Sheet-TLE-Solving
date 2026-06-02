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
        ll n;
        cin>>n;
        ll one=0; ll zer=0;

        vi v(n);
        for(ll i=0; i<n; i++) {
            cin>>v[i];
            if(v[i]==1) one++;
            if(v[i]==0) zer++;
        }

        cout<<one*(1LL<<zer)<<"\n";
    }

    return 0;
}
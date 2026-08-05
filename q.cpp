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

    ll n=0;
    cin>>n;
    vll v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    for(ll i=1; i<n; i++){
        v[i]= v[i]+v[i-1];
    }

    int t = 5; 
    while (t>0) {
        ll l=0,r=0;
        cin>>l>>r;
        cout<<v[r-1]-v[l-1-1]<<endl;
        t--;
    }

    return 0;
}
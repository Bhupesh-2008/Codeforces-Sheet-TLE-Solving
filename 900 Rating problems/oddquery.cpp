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
        ll n=0,q=0;
        cin>>n>>q;
        vll v(n);vll pref(n + 1, 0); 
        
        for(ll i=0; i<n; i++){
            cin >>v[i];
            pref[i+1]=pref[i]+v[i];
        }
        ll sum= pref[n];
        while(q--){
            ll l=0,r=0,k=0;
            cin>>l>>r>>k;
            ll s2=pref[r] - pref[l - 1];
            ll s3= k*(r-l+1);

            ll fsum= sum-s2+s3;
            if(fsum%2!=0) cout<<"YES\n";
            else cout<<"NO\n";
        }
        
    }

    return 0;
}
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
        ll n,k,q;
        cin>>n>>k>>q;
        vll v(n);
        for(ll i=0; i<n;i++) {
            cin>>v[i];
            if(v[i]>q) v[i]=0;
            else v[i]=1;
        } 

        ll ans=0;
        ll ones=0;
        for(ll i=0; i<n; i++){
            if(v[i]==1) ones++;
            else {
                if(ones>=k){
                    ll diff= ones-k+1;
                    ans+= (diff*(diff+1))/2;
                }
                ones=0;
                
            }
        }
        if(ones>=k){
            ll diff= ones-k+1;
            ans+= (diff*(diff+1))/2;
        }
        cout<<ans<<"\n";
    }

    return 0;
}
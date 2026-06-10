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
        ll n,k; cin>>n>>k;
        vll v(n);
        for(ll i=0; i<n; i++)cin>>v[i];

        if(n==1) cout<<0<<'\n';
        else{
            ll curr=0;
            ll ans=0;
            sort(v.begin(),v.end());
            for(int i=0; i<n-1; i++){
                if(v[i+1]-v[i]>k){
                    curr=0;
                }else{
                    curr++;
                }
                ans=max(ans,curr);
                
            }
            cout<<n-ans-1<<"\n";
        }
    }

    return 0;
}
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
        ll n,k,b,s;
        cin>>n>>k>>b>>s;

        if(k*b>s || (k-1)*n <s-k*b) cout<<-1<<"\n";
        else{
            vll v(n);
            ll r= s-k*b;
            v[0]=k*b ;
            for(ll i=0; i<n;i++){
                ll c=min(r,k-1);
                v[i]+=c;
                r-= c;
            }

            for(ll i=0; i<n; i++) cout<<v[i]<<" ";   
            cout<<"\n";
        }
    }

    return 0;
}
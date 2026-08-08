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
        vll a(n),b(n);
        for(ll i=0; i<n; i++) cin>>a[i];
        for(ll i=0; i<n; i++) cin>>b[i];
        vll c;
        ll idx=0;
        while(idx<n){
            c.push_back(a[idx]);
            idx++;
        }
        idx=0;
        while(idx<n){
            c.push_back(b[idx]);
            idx++;
        }

        ll same=0;
        ll s=0;
        sort(c.begin(),c.end());
        for(ll i=0; i<c.size()-1; i++){
            if(c[i]==c[i+1]){
                s++;
            }else s=0;
            same= max(same,s);
        }
        cout<<same+1<<endl;
    }

    return 0;
}
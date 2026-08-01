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

int gcd(int a,int b){
    if(a==1) return a;
    if(b==1) return b;
    return gcd(a,a-b);
}

int main() {
    fast_io; // Optimization for competitive programming

    int t = 0;
    cin >> t; 
    while (t--) {
        ll n=0;
        cin>>n;
        vll v(n);
        for(ll i=0; i<n; i++) cin>>v[i];

        int k= v[0]-1;
        for(int i=1; i<n; i++){
            k= gcd(k,abs(v[i]-(i+1)));
        }

        cout<<k<<"\n";
    }

    return 0;
}
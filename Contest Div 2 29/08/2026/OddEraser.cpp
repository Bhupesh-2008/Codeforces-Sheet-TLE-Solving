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

int gcd(ll a,ll b){
    while(b!=0){
        a%=b;
        swap(a,b);
    }
    return a;
}

int main() {
    fast_io; // Optimization for competitive programming

    int t = 0;
    cin >> t; 
    while (t--) {
        int n=0;cin>>n;
        vll v(n);
        for(int i=0; i<n; i++)cin>>v[i];

        if(n==1) cout<<v[0]<<endl;
        else cout<<gcd(v[0],v[n-1])<<endl;
        
    }

    return 0;
}
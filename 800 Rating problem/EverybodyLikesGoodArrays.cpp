#include <bits/stdc++.h>
using namespace std;

// Shorthand for common types and containers
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
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
        vll v(n);
        for( ll i=0; i<n; i++)cin>>v[i];
        
        vll parity;
        int x=0;
        for(int i=0; i<n; i++){
            if(v[i]%2 == v[i+1]%2){
                x++;
            }else {
                parity.push_back(x);
                x=0;
            }
        }
        if(x>0){
            parity.push_back(x-1);
        }
        ll sum= accumulate(parity.begin(), parity.end(),0);
        cout<<sum<<"\n";
    }

    return 0;
}
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
        ll n; cin>>n;
        vll v(n);

        for(ll i=0; i<n; i++){
            cin>>v[i];
        }

        ll zor=0;
        for(ll i=0; i<n; i++){
            zor^=v[i];
        }

        if(n%2!=0){
            cout<<zor<<"\n";
        }else{
            if(zor==0)cout<<zor<<"\n";
            else cout<<-1<<"\n";
        }
    }

    return 0;
}
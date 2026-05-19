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
        for(ll i=0; i<n; i++) cin>>v[i];
        vll b;
        vll c;

        int maximum= *max_element(v.begin(), v.end());
        for(ll i=0; i<n; i++){
            if(v[i]!=maximum) b.push_back(v[i]);
            else c.push_back(v[i]);
        }
        if(b.size()==0){
            cout<<-1<<"\n";
        }
        else{
            cout<<b.size()<<" "<<c.size()<<"\n";
            for(ll i=0; i<b.size(); i++) cout<<b[i]<<" ";
            cout<<"\n";
            for(ll i=0; i<c.size(); i++) cout<<c[i]<<" ";
            cout<<"\n";
        }
    }

    return 0;
}
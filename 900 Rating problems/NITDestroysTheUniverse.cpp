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
        ll n=0;
        cin>>n;
        vll v(n);
        for(ll i=0; i<n; i++)cin>>v[i];

        int ans=0;
        bool zer=false;
        if(v[0]!=0) ans++;
        for(ll i=0; i<n; i++){
            if(v[i]==0) zer=true;
            if((v[i]!=0) && (zer==true)){
                ans++;
                zer=false;
            }
        }
        if(ans<=2){
            cout<<ans<<"\n";
        }else{
            cout<<2<<"\n";
        }
        
    }

    return 0;
}
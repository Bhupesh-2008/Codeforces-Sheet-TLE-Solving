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
        for(ll i=0; i<n; i++) cin>>v[i];

        if(n==1)cout<<0<<"\n";
        else{
            int cond1=INT_MIN,cond2=INT_MIN,cond3=INT_MIN;
            for(int i=1;i<n; i++){
                if(v[i]-v[0]>cond1) cond1= v[i]-v[0];
            }
            for(int i=0; i<=n-1; i++){
                if(v[n-1]-v[i]>cond2) cond2= v[n-1]-v[i];
            }
            for(int i=0; i<n-1;i++){
                if(v[i]-v[i+1]>cond3) cond3= v[i]-v[i+1];
            }

            int ans= max(max(cond1,cond2),cond3);
            cout<<ans<<"\n";
        }
    }

    return 0;
}
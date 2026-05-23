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
        vll a(n); vll b(n);
        for(ll i=0; i<n; i++)cin>>a[i];
        for(ll i=0; i<n; i++)cin>>b[i];

        ll sum_maxs =0;
        ll max_of_mins =0;

        for(ll i=0;i<n; i++){
            sum_maxs+=max(a[i],b[i]);
            
            max_of_mins =max(max_of_mins,min(a[i],b[i]));
        }

        cout<<sum_maxs+max_of_mins<<"\n";
    }

    return 0;
}
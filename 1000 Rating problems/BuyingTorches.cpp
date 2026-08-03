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
        ll x=0,y=0,k=0;
        cin>>x>>y>>k;
        
        ll trades=0;
        ll a=k+k*y-1;
        ll b=x-1;
        ll r= (a+b-1)/b;
        trades+= r;
        trades+=k; 
        cout<<trades<<"\n";
    }

    return 0;
}
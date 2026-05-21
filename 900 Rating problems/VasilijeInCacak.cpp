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
        ll n,k, x;
        cin>>n>>k>>x;
        ll minsum= k*(k+1)/2;
        ll maxsum=0;
        while(k>0){
            maxsum+=n;
            n--;
            k--;
        }
        if(x>=minsum && x<=maxsum)cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
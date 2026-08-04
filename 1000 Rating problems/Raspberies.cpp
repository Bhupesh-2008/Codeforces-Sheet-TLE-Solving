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
        ll n=0,k=0;
        cin>>n>>k;
        vll v(n);
        for(ll i=0;i<n;i++)cin>>v[i];

        ll count_even=0;
        ll mini=INT_MAX;

        for(int i=0;i<n;i++){
            if(v[i]%2==0) count_even++;
            if(v[i]%k==0) mini=0;
            mini= min(mini,k-v[i]%k);
        }

        if(k==4){
            if(count_even>=2) mini= min(mini,0LL);
            else if(count_even==1) mini=min(mini,1LL);
            else if(count_even==0) mini= min(mini,2LL);
        }

        cout<<mini<<"\n";
    }

    return 0;
}
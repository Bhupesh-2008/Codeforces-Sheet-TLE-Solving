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
        vll a(n);
        ll ans = 0;
        vector<int> freq(1001,0);
        int max_freq=0;
        ll mode_val=0;

        for(int i=0; i<n; i++){
            cin>>a[i];
            ans +=a[i];
            freq[a[i]]++;

            if(freq[a[i]] >max_freq){
                max_freq = freq[a[i]];
                mode_val = a[i];
            }
        }

        int other_count = n-max_freq;
        if(max_freq <=other_count+2){
            cout<<ans<<"\n";
        } else{
            ll other_sum = ans-(ll)max_freq*mode_val;
            ll an =other_sum+(ll)(other_count+2)*mode_val;
            cout <<an<<"\n";
        }

    }

    return 0;
}
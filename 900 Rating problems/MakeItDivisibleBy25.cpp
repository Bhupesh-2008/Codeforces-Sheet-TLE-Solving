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

    ll t = 0;
    cin >> t; 
    while (t--) {
        string s;
        cin>>s;
        ll n= s.length();
        ll count=n;
        
        for(int i=0; i<n;i++){
            for(int j=i+1; j<n; j++){
                if ((s[i]=='0' && s[j]=='0')|| 
                    (s[i]=='5' && s[j]=='0')|| 
                    (s[i]=='2' && s[j]=='5')|| 
                    (s[i]=='7' && s[j]=='5')){
                    ll cnt = n-i-2;
                    count = min(count,cnt);
                }
            }
        }
        cout<<count<<"\n";
    }

    return 0;
}
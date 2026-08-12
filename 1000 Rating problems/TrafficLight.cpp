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
        string s;
        char c;
        cin>>n>>c>>s;

        if(n==1 || c=='g') cout<<0<<"\n";
        else{
            s+=s;
            ll ans=0;
            ll g_close=-1;
            n*=2;
            for(ll i=n-1;i>=0;i--){
                if(s[i]=='g') g_close=i;
                if(s[i]==c && i<n && g_close!=-1) ans= max(ans,g_close-i);
            }
            cout<<ans<<'\n';
        }
    }

    return 0;
}
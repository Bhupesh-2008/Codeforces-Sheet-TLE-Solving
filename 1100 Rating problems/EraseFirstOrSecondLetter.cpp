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
        ll n=0;cin>>n;
        string s;
        cin>>s;

        vector<int> v(27,0);

        vector<pair<char,int>> p;
        for(int i=0; i<n; i++){
            if(v[s[i]-'a']==0){
                pair<char,int> x= make_pair(s[i],i);
                p.push_back(x);
                v[s[i]-'a']++;
            }
        }

        ll ans=0;
        for(auto a:p){
            ans+= n-a.second;
        }

        cout<<ans<<endl;
    }

    return 0;
}
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
        string s;
        cin>>s;

        int zero=0;
        int one=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='1') one++;
            else zero++;
        }
        int r= min(zero,one);
        if(r%2==0) cout<<"NET\n";
        else cout<<"DA\n";
    }

    return 0;
}
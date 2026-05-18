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
        int n; cin>>n;
        vi v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        bool equal= true;
        for(int i=0; i<n-1; i++){
            if(v[i]!= v[i+1]) equal = false;
        }

        if(equal) cout<<"NO\n";
        else{
            sort(v.begin(), v.end());
            int a= v[0];
            int b= v[n-1];
            if(a==b)cout<<"NO\n";
            else{
                cout<<"YES\n";
                cout<<b<<" ";
                for(int i=0; i<n-1; i++) cout<<v[i]<<" ";
                cout<<"\n";
            }
        }
    }

    return 0;
}
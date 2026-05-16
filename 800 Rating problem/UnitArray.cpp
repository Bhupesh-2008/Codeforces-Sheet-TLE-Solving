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
        int cnt=0;
        for(int i=0; i<n ; i++){
            if(v[i]==-1) cnt++;
        }
        int positive_count=n-cnt;
        int operations=0;
        
        while(positive_count<cnt|| cnt%2==1){
            operations++; 
            positive_count++;
            cnt--; 
        }
        cout<<operations<<"\n";

    }

    return 0;
}
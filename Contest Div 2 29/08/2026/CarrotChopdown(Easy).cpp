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
        int n, m;
        cin >> n >> m;
        vector<int> cnt(m+1,0);
        for(int i=0; i<n; ++i){
            int x;
            cin>>x;
            cnt[x]++;
        }
        vector<int> suffCount(m+2,0);
        for(int i=m; i>=1; --i){
            suffCount[i]= suffCount[i+1]+cnt[i];
        }

        vector<int> maxCntafter(m+2,0);
        for(int i=m; i>=1; --i){
            maxCntafter[i] =max(maxCntafter[i+1],cnt[i]);
        }
        int ans =0;

        for(int x=1; x<=m;++x){
            int extra=(2*x<=m)? cnt[2*x]:0;
            int current =suffCount[x]+extra;
            ans = max(ans,current);
        }
        
        for(int L=1; L<=m;++L){
            int current = cnt[L]+maxCntafter[L+1];
            ans = max(ans,current);
        }

        cout << ans << "\n";
    }

    return 0;
}



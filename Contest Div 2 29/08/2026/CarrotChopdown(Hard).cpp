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

        vector<int> cnt(m + 1, 0);
        for(int i=0;i<n;++i){
            int a;
            cin>>a;
            cnt[a]++;
        }
        vector<int> pref(m+1,0);
        for(int i=1; i<=m; ++i){
            pref[i] =pref[i-1]+cnt[i];
        }

        int max_k=1;
        while((1<<max_k)<m && max_k<m){
            max_k++;
        }

        vector<int> ans(m+1,0);

        for(int k=1; k<=max_k; ++k){
            int cap=1<<k;
            int max_salad=0;

            for(int L=1; L<=m; ++L){
                int current_salad=0;
                for(int c=1; c*L<=m; ++c){
                    int left_idx= c*L;
                    int right_idx= min(m,(c+1)*L-1);
                    int count_in_range =pref[right_idx]-pref[left_idx-1];

                    if(count_in_range==0) continue;

                    int contrib = (c<=cap)?c:(cap-1);
                    current_salad+=contrib*count_in_range;
                }
                max_salad = max(max_salad,current_salad);
            }
            ans[k] = max_salad;
        }

        for(int k=max_k+1; k<=m; ++k){
            ans[k]=ans[max_k];
        }

        for(int k=1; k<=m; ++k){
            cout<<ans[k]<< (k==m? "":" ");
        }
        cout << "\n";
    }

    return 0;
}




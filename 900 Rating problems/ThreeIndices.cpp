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
        int n;
        cin>>n;
        vi v(n);
        for (int i=0; i<n; i++) cin>>v[i];
        int flag=0;
        for(int i=0; i<n-1; i++){
            if(v[i]<v[i+1]){
                for(int j=i+1; j<n-1; j++){
                    if(v[j]>v[j+1]) {
                        cout<<"YES\n";
                        cout<<i+1<<" "<<j+1<<" "<<j+1+1<<"\n";
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1) break;
        }
        if(flag==0) cout<<"NO\n";

    }

    return 0;
}
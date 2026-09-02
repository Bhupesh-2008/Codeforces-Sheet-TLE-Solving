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
        int n=0;  cin>>n;
        vi v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        int length= INT_MIN;
        int cnt=0;
        for(int i=0; i<n; i++){
            if(v[i]==0) cnt++;
            if(v[i]==1){
                length= max(length, cnt);
                cnt=0;
            }
            length= max(length, cnt);
        }
        cout<<length<<"\n";
    }

    return 0;
}
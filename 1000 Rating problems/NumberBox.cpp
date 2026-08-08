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
        ll n=0,m=0;
        cin>>n>>m;
        vector<vector<ll>> v;
        for(int i=0; i<n;i++){
            vll c(m);
            for(int j=0; j<m;j++) {
                cin>> c[j];
            }
            v.push_back(c);
        }

        ll neg=0;
        ll sum=0;
        ll mini=INT_MAX;

        for(int i=0; i<n; i++){
            for(int j=0; j<m ;j++){
                if(v[i][j]<0) {
                    neg++;
                }
                sum+= abs(v[i][j]);
                mini= min(abs(v[i][j]),mini);
            }
        }

        if(neg%2==0){
            cout<<sum<<endl;
        }else{
            cout<<sum-2*mini<<endl;
        }
    }

    return 0;
}
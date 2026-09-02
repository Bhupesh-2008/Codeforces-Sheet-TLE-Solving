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
        int one=0;int two=0;
        for(ll i=0; i<n; i++) {
            cin>>v[i];
            if(v[i]==1) one++;
            else two++;
        }
        if(one==n) cout<<"1\n";
        else if(two==n){
            if(n%2==0)cout<<(n/2)<<"\n";
            else cout<<"-1\n";
        }else{
            int cnt=0;
            bool yaa= false;
            int ans=0;
            for(int i=0; i<n; i++){
                if(v[i]==2) cnt++;
                if(2*cnt==two){
                    ans= i;
                    yaa= true;
                    break;
                }
            }
            cout<<((yaa==true)? ans+1:-1)<<"\n";
        } 
    }

    return 0;
}
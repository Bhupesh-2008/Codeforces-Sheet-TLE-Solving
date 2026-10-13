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
        ll n=0;
        cin>>n;
        vll w(n,0);
        for(ll i=0; i<n; i++) cin>>w[i];

        if(n==1){
            cout<<"0"<<endl;
            continue;
        }

        ll s=0,e=n-1;
        ll ans=0;
        ll sumf=w[s],sume=w[e];

        while(s<e){
            if(sumf==sume) {
                ans=s+1+n-e;
                s++;
                e--;
                sume+=w[e];
                sumf+= w[s];
            }
            else if(sumf>sume){
                e--;
                sume+= w[e];
            }
            else{
                s++;
                sumf+= w[s];
            } 
        }

        cout<<ans<<endl;
    }

    return 0;
}
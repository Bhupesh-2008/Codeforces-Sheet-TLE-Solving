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
        ll l=0,n=0,r=0;
        cin>>n>>l>>r;
        vll v(n+1);

        bool flag=1;
        for(ll i=1; i<=n; i++){
            ll large= (r/i)*i;
            if(large<l){
                flag=0;
                break;
            }
            v[i]=large;
            
        }
        if(flag){
            cout<<"YES"<<endl;
            for(ll i=1; i<=n;i++)cout<<v[i]<<" ";
            cout<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
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
        ll a=0,b=0;
        cin>>a>>b;
        ll ans=INT_MAX;
        for(int i=0; i<32; i++){
            long long op=i;
            long long new_b= b+i;
            if(new_b==1) continue;
            long long new_a=a;
            while(new_a>0){
                new_a/=new_b;
                op++;
            }
            ans= min(ans,op);
        }

        cout<<ans<<"\n";
    }

    return 0;
}
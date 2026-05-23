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
        ll a,b;
        cin>>a>>b;

        if(a==b) cout<<"0 0\n";
        else{
            if(a>b){
                ll gcd= a-b;
                ll moves= min(b%gcd,gcd-b%gcd);
                cout<<gcd<<" "<<moves<<"\n";
            }else{
                ll gcd= b-a;
                ll moves= min(b%gcd,gcd-b%gcd);
                cout<<gcd<<" "<<moves<<"\n";
            }
            
        }
    }

    return 0;
}
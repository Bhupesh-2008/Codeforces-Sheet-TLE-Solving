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

bool even(ll i){
    if(i%2==0) return true;
    return false;
}

int main() {
    fast_io; // Optimization for competitive programming

    int t = 0;
    cin >> t; 
    while (t--) {
        ll a=0,b=0;
        cin>>a>>b;
        ll x=a;
        ll jump=1;

        if(even(a)){
            if(b%4==0) cout<<a<<"\n";
            else if(b%4==1) cout<<a-b<<"\n";
            else if(b%4==2) cout<<a+1<<"\n";
            else cout<<a+b+1<<"\n";
        }else{
            if(b%4==0) cout<<a<<"\n";
            else if(b%4==1) cout<<a+b<<"\n";
            else if(b%4==2) cout<<a-1<<"\n";
            else cout<<a-b-1<<"\n";
        }
        
    }

    return 0;
}
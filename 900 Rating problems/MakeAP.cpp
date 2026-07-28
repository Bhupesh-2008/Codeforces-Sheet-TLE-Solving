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

bool cond1(ll a,ll b,ll c){
    return ((a+c)%(2*b)==0);
}

bool cond2(ll a,ll b,ll c){
    return (((2*b -c) >0) && ((2*b -c)%a==0));
} 

bool cond3(ll a,ll b,ll c){
    return (((2*b -a)>0) && ((2*b -a)%c==0));
}

int main() {
    fast_io; // Optimization for competitive programming

    int t = 0;
    cin >> t; 
    while (t--) {
        ll a=0,b=0,c=0;
        cin>>a>>b>>c;

        if(cond1(a,b,c) || (cond2(a,b,c)) || (cond3(a,b,c))) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
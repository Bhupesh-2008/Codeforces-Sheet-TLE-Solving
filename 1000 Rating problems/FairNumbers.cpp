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

bool fair(ll n){
    string s= to_string(n);
    vll v(s.length());
    for(int i=0; i<v.size();i++){
        v[i]=s[i]-'0';
    }

    for(int i=0; i<v.size(); i++){
        if(v[i]!=0 && v[i]!=1 && n%v[i]!=0) return false;
    }

    return true;
}

int main() {
    fast_io; // Optimization for competitive programming

    int t = 0;
    cin >> t; 
    while (t--) {
        ll n=0;
        cin>>n;

        if(fair(n)) cout<<n<<"\n";
        else{
            while(!fair(n)) n++;
            cout<<n<<"\n";
        }
    }

    return 0;
}
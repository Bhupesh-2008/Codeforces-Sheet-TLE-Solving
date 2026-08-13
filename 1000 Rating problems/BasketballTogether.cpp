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

    ll n=0,d=0;
    cin>>n>>d;
    vll v(n);
    for(ll i=0; i<n; i++)cin>>v[i];

    sort(v.begin(),v.end());
    ll memberleft=n;
    ll ans=0;

    ll i=0,j=n-1;

    while(memberleft>0){
        ll req= 1+(d/v[j]);
        if(req<=memberleft){
            ans++;
            memberleft-=(req);
            i+=(req-1);
            j-=1;
        }else break;
    }

    cout<<ans;

    return 0;
}
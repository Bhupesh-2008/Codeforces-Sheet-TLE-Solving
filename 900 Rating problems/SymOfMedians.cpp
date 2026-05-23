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
        int n,k;
        cin>>n>>k;
        vll v(n*k);
        for(ll i=0; i<n*k; i++) cin>>v[i];

        int x=0;
        if(n%2==0) x= n/2;
        else x=(n/2)+1;

        x= n-x+1;
        ll sum=0;
        for(int i=(n*k)-1-x+1; i>=0 && k>0; i-=x){
            sum+=v[i];
            k--;
        }

        cout<<sum<<"\n";
    }

    return 0;
}
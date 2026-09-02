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
        int x,k;
        cin>>x>>k;
        if(x%k!=0){
            cout<<"1\n";
            cout<<x<<"\n";
        }else{
            cout<<"2\n";
            cout<<"1 "<<(x-1)<<"\n";
        }
    }

    return 0;
}
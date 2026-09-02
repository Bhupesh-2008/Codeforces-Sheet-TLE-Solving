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

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    fast_io; // Optimization for competitive programming

    int t = 0;
    cin >> t; 
    while (t--) {
        int n; cin>>n;
        vi v(n);
        for( int i=0; i<n; i++) cin>>v[i];

        int flag=0;
        for(int i=0; i<n; i++){
            for(int j=i+1;j<n; j++){
                if(gcd(v[i], v[j]) <= 2){
                    flag=1;
                }
            }
        }
        cout<<((flag==1)?"Yes":"No")<<"\n";
    }

    return 0;
}
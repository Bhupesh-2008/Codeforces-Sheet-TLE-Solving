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

    long long t = 0;
    cin >> t; 
    while (t--) {
        long long n,k;
        cin>>n>>k;  

        long long ans=0;
        if(k%2==0){
            if(n%2==0) ans=1;
        }else{
            if(n%2==0) ans=1;
            else{
                if((n-k)%2==0) ans=1;
            }
        }
        
        cout<< ((ans==1)? "YES\n": "NO\n");
    }

    return 0;
}
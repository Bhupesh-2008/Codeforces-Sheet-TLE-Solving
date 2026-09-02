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

// bool round(ll n){
//     vi digit;
//     ll zer=0;
//     ll cnt=0;
//     while(n>0){
//         digit.push_back(n%10);
//         n/=10;
//     }
//     for(ll i=0; i<digit.size();i++){
//         if(digit[i]==0){
//             zer++;
//         }else cnt++;
//     }
//     if(cnt==1) return true;
//     else return false;
// }

int main() {
    fast_io; // Optimization for competitive programming

    int t = 0;
    cin >> t; 
    while (t--) {
        ll n;
        cin>>n;
        ll m=n;
        
        ll digit=0;
        while(n>0){
            if(n/10 >0) digit++;
            n/=10;
        }

        ll ans= digit*9 + m/pow(10,digit);
        cout<<ans<<"\n";
    }

    return 0;
}
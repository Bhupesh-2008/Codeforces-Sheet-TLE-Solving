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

    int t = 0;
    cin >> t; 
    while (t--) {
        ll a=0,b=0;
        cin>>a>>b;

        if(a==b){
            cout<<"0\n";
            continue;
        }
        if(a>b){
            swap(a,b);
        }
        if(b%a !=0){
            cout<<-1<<"\n";
            continue;
        }

        ll r= b/a;
        ll op= 0;

        while(r%8==0){
            op++;
            r/=8;
        }
        while(r%4==0){
            op++;
            r/=4;
        }
        while(r%2==0){
            op++;
            r/=2;
        }

        if(r==1)cout<<op<<"\n";
        else cout<<-1<<"\n";
    }

    return 0;
}
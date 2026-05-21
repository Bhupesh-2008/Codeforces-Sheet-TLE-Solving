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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int dist= d-b;
        a+=dist;
        if(b>d){
            cout<<-1<<"\n";
        }
        else if(a<c){
            cout<<"-1\n";
        }else{
            dist+=(a-c);
            cout<<dist<<"\n";
        }
    }

    return 0;
}
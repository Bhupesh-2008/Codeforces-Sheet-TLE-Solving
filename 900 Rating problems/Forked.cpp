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
        ll a,b;
        cin>>a>>b;
        ll xk,yk,xq,yq;
        cin>>xk>>yk>>xq>>yq;

        set<pii> king;
        set<pii> queen;

        king.insert(make_pair(xk+a,yk+b));
        king.insert(make_pair(xk+a,yk-b));
        king.insert(make_pair(xk-a,yk+b));
        king.insert(make_pair(xk-a,yk-b));
        king.insert(make_pair(xk+b,yk+a));
        king.insert(make_pair(xk+b,yk-a));
        king.insert(make_pair(xk-b,yk+a));
        king.insert(make_pair(xk-b,yk-a));

        queen.insert(make_pair(xq+a,yq+b));
        queen.insert(make_pair(xq+a,yq-b));
        queen.insert(make_pair(xq-a,yq+b));
        queen.insert(make_pair(xq-a,yq-b));
        queen.insert(make_pair(xq+b,yq+a));
        queen.insert(make_pair(xq+b,yq-a));
        queen.insert(make_pair(xq-b,yq+a));
        queen.insert(make_pair(xq-b,yq-a));

        int cnt=0;
        for(auto pos:king){
            if(queen.count(pos)){
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }

    return 0;
}
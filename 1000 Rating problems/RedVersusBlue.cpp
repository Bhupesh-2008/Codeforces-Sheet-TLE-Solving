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
        int n=0,r=0,b=0;
        cin>>n>>r>>b;
        int jump=r/(b+1);

        while(n>0){
            int j=jump+((r%(b+1))?1:0);
            while(j>0 && r>0){
                cout<<"R";
                j--; r--;
                n--;
            }
            if(b>0){      
                cout<<"B";
                b--;
                n--;
            }
        }
        cout<<endl;
    }

    return 0;
}
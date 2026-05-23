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
        ll n; cin>>n;
        vll a(n);
        int positive_numbers=0;
        for( ll i=0; i<n; i++) {
            cin>>a[i];
            if(a[i]>0) positive_numbers++;
        }

        // if(positive_numbers==0) cout<<"0\n";
        // else if( positive_numbers==n){
        //     cout<<"1\n";
        //     cout<<n<<"\n";
        // } 
        vi ops;
        bool flipped=false;
        
        for(int i=n-1; i>=0;i--){
            ll currentVal = a[i];
            
            if(flipped){
                currentVal= -currentVal;
            }
            if(currentVal >0){
                ops.push_back(i+1); 
                flipped =!flipped;  
            }
        }
        cout<< ops.size()<<"\n";
        for(int i=0; i<ops.size();i++){
            cout <<ops[i]<<(i==ops.size()-1? "":" ");
        }
        cout<<"\n";

    }

    return 0;
}
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
        int k,n,x;
        cin>>n>>k>>x;
        vi v;
        for(int i=1; i<k+1;i++){
            if(i!=x) v.push_back(i);
        }
        if(x!=1) {
            cout<<"YES\n";
            cout<<n<<"\n";
            for(int i=0; i<n; i++){
                cout<<"1 ";
            }cout<<"\n";
        }
        else{
            if(k==1 || (k==2 && n%2!=0)){
                cout<<"NO\n";
            }
            else if(n%2==0 ){
                cout<<"YES\n";
                cout<<n/2<<"\n";
                for(int i=0; i<n/2; i++)cout<<"2 ";
                cout<<"\n";
            }else{
                cout<<"YES\n";
                cout<<1+(n-3)/2<<"\n";
                cout<<"3 ";
                for(int i=0; i<(n-3)/2;i++){
                    cout<<"2 ";
                }cout<<"\n";
            }
        }
    }

    return 0;
}
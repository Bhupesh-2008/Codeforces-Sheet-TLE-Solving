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
        int n=0;
        cin>>n;
        vi v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        // if(n==1) cout<<v[0]<<"\n";
        // else{
        //     for(int i=0; i<n; i++){
        //         for(int j=i+1; j<n; j++){
        //             swap(v[i],v[j]);
        //             if(i-v[i]!= j-v[j]){
        //                 break;
        //             }
        //             else swap(v[i],v[j]);
        //         }
        //     }

        //     for(int i=0; i<n-1; i++)cout<<v[i]<<" ";
        //     cout<<v[n-1]<<"\n";
        // }

        sort(v.begin(),v.end());
        for(int i=n-1; i>0; i--){
            cout<<v[i]<<" ";
        }
        cout<<v[0]<<"\n";
    }

    return 0;
}
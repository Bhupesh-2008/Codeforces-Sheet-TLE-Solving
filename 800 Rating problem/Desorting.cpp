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

bool checkSorted(vi arr){
    int n= arr.size();
    for(int i=0; i<n-1; i++){
        if(arr[i+1]<arr[i])return false;
    }
    return true;
}

int main() {
    fast_io; // Optimization for competitive programming

    int t = 0;
    cin >> t; 
    while (t--) {
        int n=0; cin>>n;
        vi v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        if(!checkSorted(v)) cout<<"0\n";
        else{
            int diff=INT_MAX;
            for(int i=0; i<n-1; i++){
                diff= min(diff, v[i+1]-v[i]);
            }
            cout<<(diff/2)+1<<"\n";
        }
    }

    return 0;
}
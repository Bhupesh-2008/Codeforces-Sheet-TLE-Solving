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
        int n;
        cin>>n;
        vi a(n);
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        int minCalls=n;

        for(int i=0; i<n;i++){
            int leftCount=0;
            int rightCount=0;
            for(int j=0; j<n; j++){
                if(a[j]<a[i]) leftCount++;
                if(a[j]>a[i]) rightCount++;
            }
            int currentCalls=max(leftCount,rightCount);
            minCalls = min(minCalls, currentCalls);
        }

        cout<< minCalls <<"\n";
    }

    return 0;
}
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
        string s;
        cin>>s;
        
        int maxi=1;
        int curr=1;
        for(int i=0; i<s.length()-1;i++){
            if(s[i+1]==s[i]) curr++;
            else{
                maxi=max(maxi,curr);
                curr=1;
            }
            maxi=max(maxi,curr);
        }

        cout<<maxi+1<<"\n";
    }

    return 0;
}
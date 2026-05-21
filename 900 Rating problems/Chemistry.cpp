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
        int n;int k;
        cin>>n>>k;
        string s;
        cin>>s;

        unordered_map<char,int>cnt;
        for(int i=0; i<n; i++){
            char ch= s[i];
            cnt[ch]++;
        }

        int odd=0; int even=0;
        for(int i=0; i<26; i++){
            char ch ='a'+i;
            if(cnt[ch]%2==0) even++;
            else odd++;
        }
        cout<<((odd>k+1)?"NO":"YES")<<"\n";
        
    }

    return 0;
}
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
        string s;
        cin>>s;
        int ab=0;
        int ba=0;

        for(int i=1; i<s.length();i++){
            if(s[i-1]=='a' && s[i]=='b') ab+=1;
            if(s[i-1]=='b' && s[i]=='a') ba+=1;
        }

        if(ab==ba) cout<<s<<"\n";
        else {
            if((s[0]=='a' && s[s.length()-1]=='a')&&(s[0]=='b' && s[s.length()-1]=='b')){
                cout<<s<<"\n";
            }
            else{
                s[0]=s[s.length()-1];
                cout<<s<<"\n";
            }
        }
    }

    return 0;
}
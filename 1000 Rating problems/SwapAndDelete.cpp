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

        int zer=0,one=0;
        for(int i=0; i<s.length(); i++){
            char ch=s[i];
            if(ch=='0') zer++;
            if(ch=='1') one++;
        }

        int lent=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='0' && one>0){
                one--;
                lent++;
            }
            else if( s[i]=='1' && zer>0){
                zer--;
                lent++;
            }
            else{
                break;
            }
        }

        cout<<s.length()-lent<<"\n";
    }

    return 0;
}
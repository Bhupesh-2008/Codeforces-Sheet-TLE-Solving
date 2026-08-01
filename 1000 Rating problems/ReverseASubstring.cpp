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

    int n=0;
    cin>>n;
    string s;
    cin>>s;

    vi v(26);
    for(int i=0; i<n; i++){
        v[s[i]-'a']++;
    }

    bool change=false;
    int idx=0;
    for(int i=0; i<n-1; i++){
        // if(s[i]!=s[i+1] && v[s[i]-'a']>1){
        //     change= true;
        //     idx=i+1;
        //     break;
        // }
        // else v[s[i]-'a']--;

        if(s[i]>s[i+1]){
            idx= i;
            change= true;
            break;
        }
    }

    if(change){
        cout<<"YES\n";
        cout<<idx+1<<" "<<idx+2<<"\n";
    }else{
        cout<<"NO\n";
    }

    return 0;
}
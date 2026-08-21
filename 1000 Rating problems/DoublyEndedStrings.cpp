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
        string a,b;
        cin>>a>>b;

        if(a.length()>b.length()) swap(a,b);
        int maxi=0;
        for(int i=0;i<a.length(); i++){
            for(int j=0; j<b.length();j++){
                int curr=0;
                while(i+curr<a.length() && j+curr<b.length() && a[i+curr]==b[j+curr]){
                    curr++;
                }
                maxi= max(curr,maxi);
                
            }
        }

        cout<< a.length()+b.length()-2* (maxi)<<endl;

    }

    return 0;
}
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
        int n,x,s;
        cin>>n>>x>>s;
        string u;
        cin>>u;
        vi a(x+1,-1);
        a[0]=0;

        for(char c:u){
            vi b=a;
                
            for(int j=0; j<=x; j++){
                if(a[j]==-1) continue;
                int availability= (j*s)-a[j];

                if((c=='I' || c=='A')&& j<x){
                    b[j+1]=max(b[j+1],a[j]+1);
                }
                if((c=='E' || c=='A')&& availability>0){
                    b[j]=max(b[j],a[j]+1);
                }
            }
            a=b;
        }
        int ans= 0;
        for(int i:a){
            ans =max(ans,i);
        }
            
        cout<<ans<<"\n";
    }

    return 0;
}
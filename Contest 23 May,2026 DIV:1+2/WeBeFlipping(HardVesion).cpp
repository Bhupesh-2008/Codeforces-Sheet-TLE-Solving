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
    while(t--){
        int n;
        cin>>n;
        
        vll a(n+1);
        ll sum_all=0;
        for(int i=1; i<=n; i++){
            cin>>a[i];
            sum_all+=a[i];
        }

        vll pref(n + 2, 0);
        vll suff(n + 2, 0);
    
        for(int i=1;i<=n; i++) pref[i]=pref[i-1]+abs(a[i]);
        for(int i=n; i>=1; i--) suff[i]=suff[i+1]+a[i];

        ll best_sum=sum_all;
        int best_m =0;

        for(int m =1; m<=n;m++){
            if(a[m]>0){
                ll score = pref[m-1]-a[m]+suff[m+1];
                if (score>best_sum){
                    best_sum=score;
                    best_m=m;
                }
            }
        }

        if(best_m ==0){
            cout<<0<<"\n\n";
            continue;
        }

        vi y(n+2,0);
        y[best_m]=1;
        for(int i=1; i<best_m;i++){
            if(a[i]<0)y[i]=1;
            else y[i]=0;
        }
        vi S;
        for(int i=1; i<=n;i++){
            if(y[i]!=y[i+1]){
                S.pb(i);
            }
        }
        list<int> seq;
        for(int i=sz(S)-1; i>=0;i--){
            int idx=S[i];
            if(a[idx]>0) {
                seq.push_front(idx);
            }else{
                seq.insert(next(seq.begin()),idx);
            }
        }

        cout<<sz(seq)<<"\n";
        for(auto it=seq.begin(); it!=seq.end(); ++it){
            cout<<*it<<((next(it)==seq.end())? "" : " ");
        }
        cout<<"\n";
    }

    return 0;
}
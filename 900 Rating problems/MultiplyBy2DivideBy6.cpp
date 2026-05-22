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
        ll n;
        cin>>n;

        ll a=n;
        int two=0;int three=0;
        while(n%2==0){
            n/=2;
            two++;
        }
        while(n%3==0){
            n/=3;
            three++;
        }

        if(n>1) cout<<-1<<"\n";
        else if(a==1) cout<<"0\n";
        else{
            if(two==three) cout<<two<<"\n";
            else if(two>three) cout<<-1<<"\n";
            else{
                cout<<2*three-two<<"\n";
            }
        }
    }

    return 0;
}
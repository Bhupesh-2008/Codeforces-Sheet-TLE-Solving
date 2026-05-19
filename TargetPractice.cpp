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
        vector<vector<char>>v(10,vector<char>(10));
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin>>v[i][j];
            }
        }
        int one=0,two=0,three=0,four=0,five=0;

        for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
        if(v[i][j] == 'X') {
            if(i==0 || i==9 || j==0 || j==9){
                one++;
            }
            else if(i==1 || i==8 || j==1 || j==8){
                two++;
            }
            else if(i==2 || i==7 || j==2 || j==7){
                three++;
            }
            else if(i==3 || i==6 || j==3 || j==6){
                four++;
            }
            else{
                five++;
            }
        }
    }
}
        int ans= 1*one+ 2*two+ 3*three+ 4*four+ 5*five;
        cout<<ans<<"\n";
    }

    return 0;
}
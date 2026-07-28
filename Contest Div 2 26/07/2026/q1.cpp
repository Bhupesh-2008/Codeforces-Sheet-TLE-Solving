#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> w(n);
    for(int i=0; i<n; i++){
        cin>>w[i];
    }

    if(n%2!=0){
        cout<<"NO\n";
        return;
    }
    int min_odd_pos = 2e9+7;  
    int max_even_pos = -1;      

    for(int i=0; i<n; i++){
        if(i%2==0){
            min_odd_pos = min(min_odd_pos,w[i]);
        } else{
            max_even_pos = max(max_even_pos, w[i]);
        }
    }
    if(min_odd_pos-max_even_pos >= 2){
        cout<<"YES\n";
    } else{
        cout<<"NO\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >>t;
    while(t--){
        solve();
    }
    
    return 0;
}
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


int most_occur(vll v){
    unordered_map<ll,int> freq;
    int max_cnt=0;
    int max_element=v[0];
    for(int i=0; i<v.size(); i++){
        freq[v[i]]++;
        if(freq[v[i]]>max_cnt){
            max_cnt= freq[v[i]];
            max_element= v[i];
        }
    }
    return max_cnt;
}

int main() {
    fast_io; // Optimization for competitive programming

    int t = 0;
    cin >> t; 
    while (t--) {
        ll n=0;
        cin>>n;
        vll v(n);
        for(ll i=0; i<n; i++) cin>>v[i];

        int current_highest_freq= most_occur(v);
        int operations=0;
        while (current_highest_freq < n){
			operations++; 

			if(current_highest_freq*2 <= n){
				operations +=current_highest_freq;
				current_highest_freq *= 2; 
			}
			else{
				operations+= n-current_highest_freq;
				current_highest_freq = n;
			}
		}
        cout<<operations<<"\n";
    }

    return 0;
}
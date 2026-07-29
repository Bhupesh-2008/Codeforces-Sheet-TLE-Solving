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
        string s,r;
        cin>>s>>r;
		int n = s.size();
		int m = r.size();

		vector<int> frequency_in_t(26, 0);
		for(int i = 0; i<m; i++)frequency_in_t[r[i] - 'A']++;

		for(int i =n-1; i>=0; i--){
			if (frequency_in_t[s[i]-'A']>0) frequency_in_t[s[i] - 'A']--;
			else s[i] = ',';
		}

		string final_string = "";
		for (int i = 0; i < n; i++) {
			if (s[i]!=',') final_string += s[i];
		}

		if (final_string == r) cout << "YES" << endl;
		else cout << "NO" << endl;
    }

    return 0;
}
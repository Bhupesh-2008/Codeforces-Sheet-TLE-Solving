#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fast_io; 

    int t;
    cin >> t; 
    while (t--) {
        ll n; 
        cin >> n;
        string s;
        cin >> s;

        vi left_freq(26, 0);
        vi right_freq(26, 0);
        
        int dist_left = 0, dist_right = 0;
        for(int i = 0; i < n; i++) {
            if(right_freq[s[i] - 'a'] == 0) dist_right++;
            right_freq[s[i] - 'a']++;
        }

        int max_ans = 0;

        for(int i = 0; i < n - 1; i++) { 
            char ch = s[i] - 'a';
            
            if(left_freq[ch] == 0) dist_left++;
            left_freq[ch]++;
            right_freq[ch]--;
            if(right_freq[ch] == 0) dist_right--;
            
            max_ans = max(max_ans, dist_left + dist_right);
        }
        
        cout << max_ans << "\n";
    }

    return 0;
}
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

long long xor_till(long long n){
	long long a=n%4;
	if(a==0)
		return n;
	else if(a== 1)
		return 1;
	else if(a ==2)
		return n+1;
	else
		return 0;
}

int main() {
    fast_io; // Optimization for competitive programming

    int t = 0;
    cin >> t; 
    while (t--) {
        ll a=0,b=0;
        cin>>a>>b;

        long long arr_xor = xor_till(a - 1);
		if(arr_xor ==b) cout<<a<<endl;
		else if ((arr_xor ^ b) != a) cout<<a+1<<endl;
		else cout<<a+2<< endl;
    }

    return 0;
}
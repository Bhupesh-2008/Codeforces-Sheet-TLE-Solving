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
        ll n=0;
        cin>>n;
        vll v(n);
        for(ll i=0; i<n; i++)cin>>v[i];

        map<ll,ll> freq;
        for(ll i=0;i<n;i++) freq[v[i]]++;

        long long oneTime=0;
        for(auto i:freq){
            if(i.second==1){
                oneTime=1;
                break;
            }
        }

        if(oneTime==1) {
            cout<<-1<<endl;
            continue;
        }

        vll students(n);
        for(int i=0; i<n;i++) 
			students[i]=i+1;

		long long l=0,r=0;
		while(r<n){
			if(v[l]==v[r])
				r++;
			else{
				rotate(students.begin()+l,students.begin()+l+1,students.begin()+r);
				l=r;
			}
		}
		rotate(students.begin()+l,students.begin()+l+1,students.begin()+r);

		for(auto i:students)
			cout<<i<< " ";
		cout<<endl;
    }

    return 0;
}
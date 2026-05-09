#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=0; cin>>t;

    while(t--){
        long long n=0; cin>>n;
        vector<long long>v(n-1);
        for(int i=0; i<n-1; i++) cin>>v[i];

        long long sum= accumulate(v.begin(),v.end(),0);
        cout<<-sum<<"\n";
    }
    return 0;
}
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    long long n=0;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++) v[i]=abs(v[i]);

    long long mini= LLONG_MAX;
    for(int i=0;i<n;i++) mini= min(mini,v[i]);

    cout<< mini<<"\n";
}
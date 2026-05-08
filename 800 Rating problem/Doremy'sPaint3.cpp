#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>v){
    int n= v.size();
    int s= v[0]+v[1];
    for(int i=0; i<n-1; i++){
        if(v[i]+v[i+1]!=s){
            return false;
        }
    }
    return true;
}

int main(){
    int t=0; cin>>t;
    while(t--){
        int n=0; cin>>n; 
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        
    }

    return 0;
}
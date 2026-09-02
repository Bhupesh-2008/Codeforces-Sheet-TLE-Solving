#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=0; cin>>t;
    while(t--){
        int n=0; cin>>n; 
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        
        cout<<((v[0]==1)?"Yes":"No" )<<"\n";
    }

    return 0;
}


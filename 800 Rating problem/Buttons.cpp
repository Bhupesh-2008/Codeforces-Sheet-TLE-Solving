#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=0; cin>>t;
    while(t--){
        vector<int>v(3);
        for(int i=0; i<3; i++) cin>>v[i];
        int diff=abs(v[0]-v[1]);
        if( (abs(v[2]-diff))%2==0)cout<<"Second\n";
        else cout<<"First\n";
    }
    return 0;
}
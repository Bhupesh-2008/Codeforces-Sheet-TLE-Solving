#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=0; cin>>t;

    while(t--){
        int n;
        cin>>n;
        string ans=((n+1)%3==0 || (n-1)%3==0)?"First":"Second";
        cout<<ans<<"\n";
    }
    return 0;
}
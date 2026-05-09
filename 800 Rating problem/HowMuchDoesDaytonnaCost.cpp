#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=0; 
    cin>>t;
    while(t--){
        int n=0,k=0;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        vector<int>freq(101,0);
        // freq dekh rahe hai hr element ki joki given array mein present hai
        for(int i=0; i<n; i++){
            freq[v[i]]++;
        }
        //checking whether given element is there or not, agr na hua to No print krva do
        if(freq[k]==0) cout<<"NO\n";
        else cout<<"YES\n";
        // else{
        //     int maxi= INT_MIN;
        //     for(int i=0; i<101; i++){
        //         if(freq[i]>maxi) maxi= freq[i];
        //     }
        //     if(freq[k]>=maxi) cout<<"YES\n";
        //     else cout<<"NO\n";
        // }
        
    }
    return 0;
}
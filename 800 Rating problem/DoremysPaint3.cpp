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
        long long n=0; cin>>n; 
        vector<long long> v(n);
        for(long long i=0; i<n; i++) cin>>v[i];
        
        vector<long long>freq(100001, 0);
        //har number ki frequency ko store krvaya
        for(long long i=0; i<n; i++){
            freq[v[i]]++;
        }
        long long cnt=0;
        //calculate kiya ki kitne distinct number hai
        for(long long i=0; i<100001; i++){
            if(freq[i]!=0) cnt++;
        }
        if(cnt==1) cout<<"YES\n";
        else if(cnt>2) cout<<"NO\n"; //agar number distinct waale 2 se zyada hue to nhi hoga answer
        else{
            long long x1=0,x2=0,n1=0,n2=0;
            x1= v[0];
            //dono numbers ko kisi variable mein store krvaya
            for(long long i=0; i<n; i++){
                if(v[i]!=x1) x2= v[i];
            }
            //calculate kro frequency of two numbers
            for(long long i=0; i<n; i++){
                if(v[i]==x1)n1++;
                if(v[i]==x2)n2++;
            }

            if(n%2 ==0){
                if(n1==n2) cout<<"YES\n";
                else cout<<"NO\n";
            }else{
                if(n1+1==n2 || n2+1==n1) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
        
    }

    return 0;
}
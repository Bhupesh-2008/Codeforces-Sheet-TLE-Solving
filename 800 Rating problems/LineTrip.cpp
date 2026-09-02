#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int t=0; 
    cin>>t;

    while(t--){
        long long n=0;
        cin>>n;
        long long x=0; 
        cin>>x;

        vector<long long>v;
        v.push_back(0);
        for(int i=0; i<n; i++){
            long long point;
            cin>>point;
            v.push_back(point);
        }
        v.push_back(x);

        long long maxDist= INT_MIN;
        n=v.size();
        for(int i=1; i<n;i++){
            if(i==n-1){
                maxDist= max(maxDist,2*(v[i]-v[i-1]));
            }else{
                maxDist= max(maxDist, v[i]-v[i-1]);
            }
        }
        cout<<maxDist<<endl;
    }

    return 0;
}
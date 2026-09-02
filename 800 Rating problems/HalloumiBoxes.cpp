#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&arr ){
    for(int i=0; i<arr.size()/2;i++){
        swap(arr[i], arr[arr.size()-1-i]);
    }
}

bool isSorted(vector<int>&v){
    for(int i=0; i<v.size()-1; i++){
        if(v[i]>v[i+1]) return false;
    }
    return true;
}

bool check(vector<int>&v, int k){
    if(k==1 && isSorted(v)==true){
        return true;
    }else if(k>1){
        return true;
    }
    return false;
}

int main(){
    int t=0; 
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        int k=0;
        cin>>k;

        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        cout<<(check(v,k)==1?"YES":"NO")<<endl;
    }
    return 0;
}
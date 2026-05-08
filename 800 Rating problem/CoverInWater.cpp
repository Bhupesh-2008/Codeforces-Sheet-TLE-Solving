#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=0; 
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        string s;
        cin>>s;

        int empty_cells=0;
        bool total_empty3= false;
        for(int i=0; i<n ;i++){
            if(s[i]=='.'&& i+1<n && s[i+1]=='.' && i+2<n && s[i+2]=='.'){
                total_empty3=true;
                break;
            }
            if(s[i]=='.') empty_cells++;
        }
        if(total_empty3==true) cout<<"2"<<endl;
        else{
            cout<< empty_cells<<endl;
        }
    }
    return 0;
}
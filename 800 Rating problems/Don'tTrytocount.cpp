#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=0; 
    cin>>t;

    while(t--){
        int n=0, m=0;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int ans=0;

        if(x.find(s) != std::string::npos){
            cout<<0<<"\n";
        }else{
            int cnt=0;
            while(x.find(s)== std::string::npos && cnt<=5){
                x+=x;
                cnt++;
            }
            if(x.find(s) != std::string::npos){
                cout<<cnt<<"\n";
            }else cout<<-1<<"\n";
        }
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        map<char,int>mp;
        string s;
        cin>>n>>s;
        char a=s[0];
        char b=s[n-1];
        bool c=true;
        for(int i=1;i<n-1;i++){
            if(s[i]==a||s[i]==b){
                cout<<"YES"<<'\n';
                c=false;
                break;
            }
            mp[s[i]]++;
        }
        if(c){
            for(auto i:mp){
                if(i.second>=2){
                    c=false;
                    //cout<<i.first<<" "<<i.second<<" ";
                    cout<<"YES"<<'\n';
                    break;
                }
            }
        }
        if(c){
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}
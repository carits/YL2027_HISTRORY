#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
int t,n;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--){
        int f=0;
        cin>>n>>s;
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=1;i<s.size()-1;i++){
            if(mp[s[i]]>1){
                f=1;
                break;
            }
        }
        if(f==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
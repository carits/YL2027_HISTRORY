#include<bits/stdc++.h>
using namespace std;
long long a[100005];
long long b[100005];
map<long long,long long>mp;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a[i];
    }
    for(int i=1;i<=t;i++){
        cin>>b[i];
    }
    for(int i=1;i<=t;i++){
        if(mp.find(b[i])!=mp.end()){
            cout<<mp[b[i]]<<'\n';
            continue;
        }
        long long ans=2;
        for(int j=2;j<=b[i];j++){
            ans=(ans*2)%1000000007;
        }
        mp[b[i]]=ans;
        cout<<ans<<'\n';
    }
    return 0;
}
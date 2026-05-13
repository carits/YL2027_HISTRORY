#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            int o[15]={0},maxn=0,type=0;
            for(int j=i;j<n&&j<i+100;j++){
                int x=s[j]-'0';
                o[x]++;
                if(o[x]==1) type++;
                maxn=max(maxn,o[x]);
                if(type>=maxn) ans++;
            }
        }
        cout<<ans<<'\n';
    } 
    
    return 0;
}
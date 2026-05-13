#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n;
char a[5005];
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--){
        int f=0;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<n;i++){
           if(a[i]==a[i+1]&&a[i]!='*'){
               int l=i,r=i+1; 
               while(a[l]==a[r]&&a[l]!='*'){
                   a[l]='*',a[r]='*';
                   while(a[l]=='*'&&l>1) l--;
                   while(a[r]=='*'&&r<n) r++;
               } 
           } 
        }
        for(int i=1;i<=n;i++) if(a[i]!='*') f=1;
        if(f==0) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    return 0;
}
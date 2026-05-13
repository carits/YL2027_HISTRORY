#include<bits/stdc++.h>
using namespace std;
int t,n,a[200005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--){
    	int ni;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        if(a[1]!=n){
            for(int i=ni;i>=1;i--) cout<<a[i]<<" ";
            for(int i=ni+1;i<=n;i++) cout<<a[i]<<" ";
            cout<<'\n';
            continue;
        }
        for(int i=1;i<=n;i++){
            if(a[i]==n-1){
                ni=i;
                break;
            }
        }
        if(ni==2){
            for(int i=1;i<=n;i++) cout<<a[i]<<" ";
            cout<<'\n';
        }else{
            cout<<a[1]<<" ";
            for(int i=ni;i>=2;i--) cout<<a[i]<<" ";
            for(int i=ni+1;i<=n;i++) cout<<a[i]<<" ";
            cout<<'\n';
        }
    }
    return 0;
}
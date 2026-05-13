#include<bits/stdc++.h>
using namespace std;
int ans=0;
int a[100005];
int main(){
    int n,t;
    cin>>n>>t;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                continue;
            }
            if(a[i]+a[j]<=t){
                ans=max(ans,a[i]+a[j]);
            }
        }
    }
    cout<<ans;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
long long ans=0;
long long a[100005];
int main(){
    long long n,t;
    cin>>n>>t;
    for(long long i=1;i<=n;i++){
        cin>>a[i];
    }
    for(long long i=1;i<=n;i++){
        for(long long j=i;j<=n;j++){
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
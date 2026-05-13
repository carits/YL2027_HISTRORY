#include<bits/stdc++.h>
using namespace std;
int sum[100005];
int ans=-0x3f;
int main(){
    int n=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        sum[i]=sum[i-1]+a;
    }
    for(int i=0;i<=n;i++){
        for(int j=i;j<=n;j++){
            ans=max(ans,sum[j]-sum[i]);
        }
    }
    cout<<ans;
    return 0;
}
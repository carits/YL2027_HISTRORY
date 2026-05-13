#include<bits/stdc++.h>
using namespace std;
int a[100005];
int cnt[1000005];
int main(){
    int n;
    cin >> n;
    for(int i = 1;i <= n;i ++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(i==j){
                continue;
            }
            cnt[a[i]+a[j]]++;
        }
    }
    int ans=0;
    for(int i=1;i<=1000000;i++){
        ans=max(ans,cnt[i]);
    }
    cout<<ans;
    return 0;
}
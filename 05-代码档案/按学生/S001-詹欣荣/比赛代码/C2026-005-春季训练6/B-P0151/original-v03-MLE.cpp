#include<bits/stdc++.h>
using namespace std;
long long a[100000005];
int main(){
    int n,ans=0,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(i==1||a[i]<=a[i-1]*2){
            cnt++;
        }else{
            ans=max(ans,cnt);
            cnt=1;
        }
    }
    ans=max(ans,cnt);
    cout<<ans;
    return 0;
}
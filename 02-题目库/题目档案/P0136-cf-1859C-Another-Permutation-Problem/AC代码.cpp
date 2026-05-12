#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        long long ans=0;
        for(int i=1;i<=n;i++){
            int start=n-i+1, sum=-1, mx=0;
            long long cur=0;
            for(int j=1;j<=n;j++){
                int prod;
                if(j<start) prod=j*j;
                else{
                    if(sum==-1) sum=j+n;
                    prod=j*(sum-j);
                }
                cur+=prod; mx=max(mx,prod);
            }
            ans=max(ans,cur-mx);
        }
        cout<<ans<<'\n';
    }
    return 0;
}

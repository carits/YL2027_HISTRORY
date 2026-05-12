#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; long long k;
    cin >> n >> k;
    vector<long long> a(n);
    long long mx = 0;
    for(int i=0;i<n;i++) cin >> a[i], mx=max(mx,a[i]);
    long long l=1,r=mx,ans=0;
    while(l<=r){
        long long mid=(l+r)/2;
        long long cnt=0;
        for(long long x:a){
            cnt += x/mid;
            if(cnt>=k) break;
        }
        if(cnt>=k) ans=mid,l=mid+1;
        else r=mid-1;
    }
    cout << ans << '\n';
    return 0;
}

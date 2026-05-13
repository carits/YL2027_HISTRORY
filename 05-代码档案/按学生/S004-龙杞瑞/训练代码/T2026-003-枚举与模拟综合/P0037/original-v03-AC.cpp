#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,cnt,a[1000005],b[100005];
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    b[1]=1;
    for(int i=2;i<=32;i++) b[i]=b[i-1]<<1;
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=32;j++){
            if(b[j]<=a[i]) continue;
    		if(b[j]>a[i]+a[n]) break;
            int pos=b[j]-a[i];
            int l=lower_bound(a+i+1,a+n+1,pos)-a;
            int r=upper_bound(a+i+1,a+n+1,pos)-a;
            if(l<=n&&a[l]==pos) cnt+=r-l;
        }
    }
    cout<<cnt;
    return 0;
}
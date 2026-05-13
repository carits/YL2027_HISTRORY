#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,cnt,a[1000005],b[100005];
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    b[1]=1;
    for(int i=2;i<=30;i++) b[i]=b[i-1]*2;
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=30;j++){
            if(b[j]<a[i]) continue;
            int pos=b[j]-a[i];
            int x=lower_bound(a+1,a+n+1,x)-a;
            if(a[x]==pos) cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
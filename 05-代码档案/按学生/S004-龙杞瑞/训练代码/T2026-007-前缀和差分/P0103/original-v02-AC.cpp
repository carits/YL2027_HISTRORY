#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,l[N],r[N],a[N*2],sub[N*2],ans[N];
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++){
		cin>>l[i]>>r[i],r[i]++;
        a[i*2-1]=l[i],a[i*2]=r[i];
    }
    sort(a+1,a+2*n+1);
    for(int i=1;i<=n;i++){
        int lt=lower_bound(a+1,a+2*n+1,l[i])-a,rt=lower_bound(a+1,a+2*n+1,r[i])-a;
        sub[lt]++,sub[rt]--;
    }
    for(int i=1;i<=2*n;i++) sub[i]+=sub[i-1];
    for(int i=1;i<=2*n;i++) ans[sub[i]]+=a[i+1]-a[i];
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    return 0;
}
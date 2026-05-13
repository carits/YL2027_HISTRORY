#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e6+5;;
int n,k,x,cnt,ans=1e18;
struct node{
    int val,js;
}a[N];
bool cmp(node a, node b) {
    if (a.val!=b.val) return a.val<b.val;
    return a.js<b.js;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n>>k;
    for (int i=1;i<=n;i++){
        cin>>x;
        for (int j=x,c=0;;j/=2,c++) {
            a[++cnt].val=j,a[cnt].js=c;
            if(j==0) break;
        }
    }
    sort(a+1,a+cnt+1,cmp);
    for (int i=1;i<=cnt;){
        int j=i;
        while(j<=cnt&&a[j].val==a[i].val) j++;
        if(j-i>=k){
            int sum=0;
            for (int t=i;t<i+k;t++) sum+=a[t].js;
            ans=min(ans,sum);
        }
        i=j;
    }
    cout<<ans;
    return 0;
}
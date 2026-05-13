#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,m,sum;
int a[100005],b[100005];
signed main(){
    cin>> n >> m;
    for(int i=1;i<=n;i++)cin>> a[i];
    sort(a+1,a+n+1);
    for(int i=1,num;i<=m;i++){
        cin>> num;
        int ds=lower_bound(a+1,a+n+1,num)-a;
        int de=ds-1;
        if(ds>n)ds--;
        if(de<1)de++;
        sum+=min(abs(a[ds]-num),abs(a[de]-num));
    }
    cout<< sum;
    return 0;
}
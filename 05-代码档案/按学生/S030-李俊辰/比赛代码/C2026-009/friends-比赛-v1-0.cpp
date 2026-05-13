#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,a[100005],b[100005];
signed main(){
    freopen("friends.in","r",stdin);
    freopen("friends.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    cout<<b[n];
    for(int i=2;i<=n;i++){
        cout<<n/i<<" ";
    }
    return 0;
}

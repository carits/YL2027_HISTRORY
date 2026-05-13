#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,a[100005],b,c;
signed main(){
    freopen("calculate.in","r",stdin);
    freopen("calculate.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cin>>b>>c;
    cout<<b*c;
    return 0;
}

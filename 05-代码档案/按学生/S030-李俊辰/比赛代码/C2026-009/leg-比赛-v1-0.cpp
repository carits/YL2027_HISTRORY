#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m,a,b,c,d;
signed main(){
    freopen("leg.in","r",stdin);
    freopen("leg.out","w",stdout);
    cin>>n>>m>>a>>b>>c>>d;
    if(a==c && b==d){
        cout<<n*m/4*(a+b);
    }
    else if(a==b && c==d){
        cout<<n*m/4*(a+c);
    }
    else{
        int cnt=max(a,c)+min(b,d);
        int sum=max(b,d)+min(a,c);
        cout<<n*m/4*min(cnt,sum);
    }
    return 0;
}

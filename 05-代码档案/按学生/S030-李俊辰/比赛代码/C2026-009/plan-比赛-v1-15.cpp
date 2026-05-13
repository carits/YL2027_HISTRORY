#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m,k,sum,maxx;
signed main(){
    freopen("plan.in","r",stdin);
    freopen("plan.out","w",stdout);
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x==1){
            int y;
            cin>>y;
            sum++;
        }
        else if(x==0){
            maxx=max(maxx,sum);
            sum=0;
        }
    }
    cout<<maxx;
    return 0;
}

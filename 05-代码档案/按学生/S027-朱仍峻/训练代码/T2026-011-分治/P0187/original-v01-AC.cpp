#include <bits/stdc++.h>
using namespace std;
int n,nex[15000005][2],cnt,siz[15000005];
long long ans;
void f(int s){
    int p=0;
    for(int i=29;i>=0;i--){
        int c=(s>>i)&1;
        if(c==0)ans+=siz[nex[p][1]];
        if(!nex[p][c])nex[p][c]=++cnt;
        p=nex[p][c];
        siz[p]++;
    }
}
int main(){
    cin>>n;
    for(int a,i=1;i<=n;i++){
        cin>>a;
        f(a);
    }
    cout<<ans;
    return 0;
}

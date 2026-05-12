#include <bits/stdc++.h>
using namespace std;

struct BIT{
    int n; vector<int> t;
    BIT(int n=0):n(n),t(n+1,0){}
    void add(int x,int v){ for(;x<=n;x+=x&-x) t[x]+=v; }
    int sum(int x){ int r=0; for(;x;x-=x&-x) r+=t[x]; return r; }
    int kth(int k){
        int pos=0;
        for(int pw=1<<20; pw; pw>>=1){
            int np=pos+pw;
            if(np<=n && t[np]<k){ pos=np; k-=t[np]; }
        }
        return pos+1;
    }
};
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n,q; cin>>n>>q;
    BIT bit(n); int sz=0;
    for(int i=0,x;i<n;i++){ cin>>x; bit.add(x,1); sz++; }
    while(q--){
        int k; cin>>k;
        if(k>0){ bit.add(k,1); sz++; }
        else{ int pos=bit.kth(-k); bit.add(pos,-1); sz--; }
    }
    if(sz==0){ cout<<0<<'\n'; return 0; }
    cout<<bit.kth(1)<<'\n';
    return 0;
}

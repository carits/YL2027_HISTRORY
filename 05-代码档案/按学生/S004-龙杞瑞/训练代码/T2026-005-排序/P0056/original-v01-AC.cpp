#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e6+5;
int n;
struct node{
    int l,r;
}a[100005];
bool cmp(node x,node y){
    if(x.l!=y.l) return x.l<y.l;
    return x.r<y.r;
}
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i].l>>a[i].r;
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++) cout<<a[i].l<<" "<<a[i].r<<'\n';
    return 0;
}  
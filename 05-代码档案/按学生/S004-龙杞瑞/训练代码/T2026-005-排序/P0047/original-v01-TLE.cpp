#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e6+5;
int n,cnt,a[N],b[N],c[N],v[N];
void f(int l,int r){
    if(r-l+1==1) return;
    int mid=(l+r)/2;
    f(l,mid);
    f(mid+1,r);
    int ll=l,rr=mid+1,pos=l;
    while(pos<=r){
        if(ll>mid){
            b[pos]=a[rr];
            rr++;
        }else if(rr>r){
            cnt+=r-mid;
            b[pos]=a[ll];
            ll++;
        }else if(a[ll]>a[rr]){
            b[pos]=a[rr]; 
            rr++;
        }else{
            cnt+=rr-mid-1;
            b[pos]=a[ll];
            ll++; 
        }
        pos++;
    }
    for(int i=1;i<=r;i++) a[i]=b[i];
}
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    f(1,n);
    cout<<cnt;
    return 0;
}  
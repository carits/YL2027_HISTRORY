#include<bits/stdc++.h>
using namespace std;
long long n,a[100005],cnt,b[100005];
void sot(int l,int r){
    if(r-l+1==1)return ;
    int mid=(l+r)/2;
    sot(l,mid);
    sot(mid+1,r);
    int ll=l,rr=mid+1,pos=l;
    while(pos<=r){
        if(ll>mid){
            b[pos]=a[rr];
            rr++;
        }
        else if(rr>r){
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
    for(int i=l;i<=r;i++){
        a[i]=b[i];
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sot(1,n);
    cout<<cnt;
    return 0;
}
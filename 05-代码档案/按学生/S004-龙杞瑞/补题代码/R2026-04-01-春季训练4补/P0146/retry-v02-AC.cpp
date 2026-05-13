#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n,a[100005];
struct node{
	int l,r;
}b[100005];
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--){
        int cnt=0;
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        if(a[1]!=a[n]){
            b[++cnt].l=1,b[cnt].r=n;
            if((a[1]+a[n])%2==0)a[1]=a[n];
            else a[n]=a[1];
        }
        for(int i=2;i<n;i++){
            if(a[i]!=a[n]){
                if((a[i]+a[n])%2==1){
                    b[++cnt].l=1,b[cnt].r=i;
                    a[i]=a[1];
                }
                if(a[i]!=a[n]){
                    b[++cnt].l=i,b[cnt].r=n;
                    a[i]=a[n];
                }
            }
        }
        cout<<cnt<<"\n";
        for(int i=1;i<=cnt;i++)cout<<b[i].l<<" "<<b[i].r<<'\n';
    }
    return 0;
}
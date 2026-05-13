#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int T,n,m,h,s[N],p[N],t[N];
signed main(){
    cin>>T;
    while(T--){
        cin>>n>>m>>h;
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=m;j++) cin>>t[j];
            sort(t+1,t+m+1);
            int sc=0,pt=0,ct=0;
            for (int j=1;j<=m;j++) {
                if (ct+t[j]>h) break;
                ct+=t[j],pt+=ct;
                sc++;
            }
            s[i]=sc,p[i]=pt;
        }
        int sp=s[1],rp=p[1],cnt=1;
        for(int i=2;i<=n;i++) if(s[i]>sp||(s[i]==sp&&p[i]<rp)) cnt++;
        cout<<cnt<<"\n";
    }
    return 0;
}
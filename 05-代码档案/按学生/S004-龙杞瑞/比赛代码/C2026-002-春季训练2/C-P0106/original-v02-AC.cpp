#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int a[N],s[N],p[N];
signed main(){
    int T;
    cin>>T;
    while(T--){
        int n,m,h;
        cin>>n>>m>>h; 
        for(int i=1;i<=n;i++){
            for(int j=0;j<m;j++) cin>>a[j];
            sort(a,a+m);
            int sc=0,pt=0,ct=0;
            for(int j=0;j<m;j++){
                if(ct+a[j]>h) break;
                ct+=a[j], pt+=ct, sc++;
            }
            s[i]=sc, p[i]=pt;
        }
        int rs=s[1], rp=p[1], rk=1;
        for(int i=2;i<=n;i++)
            if(s[i]>rs || (s[i]==rs && p[i]<rp)) rk++;
        cout<<rk<<"\n";
    }
    return 0;
}
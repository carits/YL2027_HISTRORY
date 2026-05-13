#include <bits/stdc++.h>
using namespace std;
int n,a[10005],sum;
int main(){
    freopen("friends.in","r",stdin);
    freopen("friends.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum<<' ';
    for(int i=2;i<=n;i++){
        int ts=n/i;
        int cnt=1,res=0,t[10005],q=0;
        while(cnt<=n){
            res=0; 
            for(int j=cnt;j<cnt+ts;j++){
                if(j>n)break;
                res+=a[j];
            }
            cnt+=ts;
            t[++q]=res;
        }
        int ans;
        for(int i=2;i<=q;i++){
            if(i==2){
                ans=__gcd(t[1],t[2]);
            }else{
                ans=__gcd(ans,t[i]);
            }
        }
        cout<<ans<<" ";
    }
    return 0;
}

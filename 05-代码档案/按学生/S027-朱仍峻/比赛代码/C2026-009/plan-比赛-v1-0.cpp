#include <bits/stdc++.h>
using namespace std;
int n,m,k,c,d,ans;
struct node{
    int id,a[15],cnt;
}t[100005];
int jc(int x){
    int sum=0;
    for(int i=2;i<=x;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    freopen("plan.in","r",stdin);
    freopen("plan.out","w",stdout);
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        cin>>t[i].cnt;
        for(int j=1;j<=t[i].cnt;j++){
            cin>>d;
            t[i].a[d]++;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            int vis[15];
            memset(vis,0,sizeof(vis));
            for(int k=i;k<=j;k++){
                for(int l=1;l<=t[k].cnt;l++){
                    vis[l]++;
                }
            }
            int sum=0;
            for(int k=i;k<=j;k++){
                if(vis[k]==2)sum++;
                else if(vis[k]>1){
                    sum+=vis[k];
                }
            }
            if(jc(j-i+1)-sum<k){
                ans=max(ans,j-i+1);
            }
        }
    }
    cout<<ans;
    return 0;
}

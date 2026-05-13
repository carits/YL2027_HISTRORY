#include<bits/stdc++.h>
using namespace std;
vector<int>b;
map<int,int>b1;
map<int,int>b2;
int n,ans=-1e9,bi=-1,bj=-1,a[100005],pos[100005],vis[100005];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) {
        if(a[i]>0) pos[i]=pos[i-1]+a[i];
        else pos[i]=pos[i-1];
    }
    for(int j=1;j<=n;j++) {
        int x=a[j];
        if (b1.find(x)!=b1.end()) {
            int val=b1[x]+x+pos[j-1];
            if (val>ans) {
                ans=val;
                bi=b2[x],bj=j;
            }
        }
        int ji=x-pos[j];
        if (b1.find(x)==b1.end()||ji>b1[x]) b1[x]=ji,b2[x]=j;
    }
    vis[bi]=1,vis[bj]=1;
    for(int i=bi+1;i<bj;i++) if(a[i]>0) vis[i]=1;
    for(int i=1;i<=n;i++) if(!vis[i]) b.push_back(i);
    cout<<ans<<" "<<b.size()<<'\n';
    for (int i=0;i<b.size();i++){
        if(i>0) cout<<" ";
        cout<<b[i];
    }
    return 0;
}
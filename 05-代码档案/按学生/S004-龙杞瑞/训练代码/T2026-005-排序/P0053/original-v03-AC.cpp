#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
struct node{
    int x[11];
}a[10005];
bool cmp(node s,node t){
    for(int i=1;i<=m;i++){
        if(s.x[i]!=t.x[i]) return s.x[i]>t.x[i];
    }   
    return 0; 
}
signed main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>a[i].x[j];
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) cout<<a[i].x[j]<<" ";
        cout<<endl;
    }
    return 0;
}   
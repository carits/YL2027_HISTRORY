#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e3+5;
int n,m;
struct node{
    int x[105],id[105];
}a[N];
struct su{
    int f,idd;
}b[N];
bool cmp(su s,su t){
    return s.f>t.f;
}
signed main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i].x[j];
            a[i].id[j]=i;
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++) b[j].idd=j,b[j].f=a[j].x[i];
        sort(b+1,b+n+1,cmp); 
        for(int j=1;j<=n;j++) cout<<b[j].idd<<" ";
        cout<<'\n';
    }
    return 0;
}  
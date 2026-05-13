#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,b[100005];
struct node{
    int x,id; 
}a[1000005];
bool cmp(node s,node t){
    return s.x<t.x;   
}
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].x;
        a[i].id=i;
    }
    sort(a+1,a+n+1,cmp); 
    for(int i=1;i<=n;i++){
        b[a[i].id]=i;
    }
    for(int i=1;i<=n;i++) cout<<b[i]<<" ";
    return 0;
}  
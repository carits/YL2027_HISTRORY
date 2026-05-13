#include<bits/stdc++.h>
using namespace std;
struct node{
    int s;
    int w;
}a[100005];
int b[100005];
bool cmp(node A,node B){
    return A.s<B.s;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].s;
        a[i].w=i;
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++){
        b[a[i].w]=i; 
    }
    for(int i=1;i<=n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
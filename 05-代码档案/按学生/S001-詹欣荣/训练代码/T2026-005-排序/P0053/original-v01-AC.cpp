#include<bits/stdc++.h>
using namespace std;
int m;
struct node{
    int l[15];
}a[100005];
bool cmp(node A,node B){
    for(int i=1;i<=m;i++){
        if(A.l[i]!=B.l[i]){
            return A.l[i]>B.l[i];
        }
    }
    return A.l[m]>B.l[m];
}
int main(){
    int n;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i].l[j];
        }
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[i].l[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
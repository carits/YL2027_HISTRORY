#include<bits/stdc++.h>
using namespace std;
struct node{
    int l;
    int r;
}a[100005];
bool cmp(node A,node B){
    if(A.l!=B.l){
        return A.l<B.l;
    }
    return A.r<B.r;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].l>>a[i].r;
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++){
        cout<<a[i].l<<" "<<a[i].r<<endl;
    }
    return 0;
}
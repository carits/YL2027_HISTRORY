#include<bits/stdc++.h>
using namespace std;
struct node{
    int l;
    int h;
}a[100005];
bool cmp(node A,node B){
    if(A.l!=B.l){
        return A.l<B.l;
    }
    return A.h<B.h; 
}
int main(){
    int n,s;
    cin>>n>>s;
    int b,c;
    cin>>b>>c;
    b+=c;
    for(int i=1;i<=n;i++){
        cin>>a[i].h>>a[i].l;
    }
    sort(a+1,a+n+1,cmp);
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(s>=a[i].l&&b>=a[i].h){
            s-=a[i].l;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
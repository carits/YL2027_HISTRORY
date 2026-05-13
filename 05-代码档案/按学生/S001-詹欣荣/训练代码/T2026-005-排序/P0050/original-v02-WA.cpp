#include<bits/stdc++.h>
using namespace std;
struct node{
    int id;
    int s;
}a[100005];
int sum[1005];
bool cmp(const node &A,const node &B){
    if(A.s!=B.s){
        return A.s>B.s;
    }
    return A.id<B.id;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i].id>>a[i].s;
        sum[a[i].s]++;
    }
    m*=1.5;
    m=floor(m);
    int cnt=0;
    int maxn=0;
    sort(a+1,a+n+1,cmp);
    for(int i=100;i>=m;i--){
        cnt+=sum[i];
        if(sum[i]!=0){
            maxn=i;
        }
        if(cnt>=m){
            break;
        }
    }
    cout<<maxn<<" "<<cnt<<endl;
    for(int i=1;i<=cnt;i++){
        cout<<a[i].id<<" "<<a[i].s<<endl;
    }
    return 0;
}
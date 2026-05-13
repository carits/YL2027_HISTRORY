#include<bits/stdc++.h>
#define int long long
using namespace std;
int n, m, k;
int sum(int val,int len) {
    if(len<=0) return 0;
    if(val<=0) return len; 
     if(val<len){
        return val*(val+1)/2+(len-val);
    }
    return len*(2*val-len+1)/2;
}
bool check(int x){
    return sum(x-1,k-1)+sum(x-1,n-k)+x<=m;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>n>>m>>k;
    int l=0,r=2e9+1;
    while(l+1<r) {
        int mid=l+r>>1;
        if(check(mid)) l=mid;
        else r=mid;
    }
    cout<<l;
    return 0;
}
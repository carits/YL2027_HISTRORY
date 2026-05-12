#include <bits/stdc++.h>
using namespace std;

long long len(long long n){
    if(n<=1) return 1;
    return len(n/2)*2+1;
}
long long query(long long n,long long L,long long R,long long ql,long long qr){
    if(qr<L || R<ql || n==0) return 0;
    if(n==1) return 1;
    long long left_len=len(n/2);
    long long mid=L+left_len;
    long long ans=0;
    ans += query(n/2,L,mid-1,ql,qr);
    if(ql<=mid && mid<=qr) ans += n%2;
    ans += query(n/2,mid+1,R,ql,qr);
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,l,r;
    cin >> n >> l >> r;
    cout << query(n,1,len(n),l,r) << '\n';
    return 0;
}

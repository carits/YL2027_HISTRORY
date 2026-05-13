#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
string s;
int q,t, k,a[N];
int f(int t,int k){
    if (t==0) return a[k];
    if (k==1) return (a[1]+t%3)%3;
    if (k%2==1) return (f(t-1,(k+1)/2)+1)%3;
    else return (f(t-1,(k+1)/2)+2)%3;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s>>q;
    for(int i=0;i<s.size();i++) a[i+1]=s[i]-'A';
    while(q--){
        cin>>t>>k;
        cout<<char(f(t,k)%3+'A')<<'\n';
    }
    return 0;
}
#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n;
void solve(){
    int pos=0;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    while(pos<n&&a[pos]==n-pos) pos++;
    if(pos==n){
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<'\n';
        return;
    }
    int mx1=0,mx2=0;
    for (int i=pos+1;i<n;i++) {
        if(a[i]>mx1){
            mx1=a[i];
            mx2=i;
        }
    }
    while(mx2+1<n&&a[mx2+1]==a[mx2]-1) mx2++;
    reverse(a.begin()+pos,a.begin()+mx2+1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<'\n';
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--) solve();
    return 0;
}
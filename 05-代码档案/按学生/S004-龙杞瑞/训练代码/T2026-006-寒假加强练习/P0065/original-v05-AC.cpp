#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n;
void solve(){
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int j=-1;
    for(int i=0;i<n;i++){
    	if(a[i]!=n-i){
    		j=i;
    		break;
		}
	}
	if(j==-1){
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<'\n';
        return;
	}
    int mx1=a[j],mx2=j;
    for (int i=j+1;i<n;i++) {
        if(a[i]>mx1){
            mx1=a[i];
            mx2=i;
        }
    }
    reverse(a.begin()+j,a.begin()+mx2+1);
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
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int t,n,a[N];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        int pos=n;
        for(int i=1;i<=n;i++) {
        	if(a[i]==n){
				pos=i;
				break;
			}
		}
        if(a[1]!=n){
            for(int i=pos;i>=1;i--) cout<<a[i]<<" ";
            for(int i=pos+1;i<=n;i++) cout<<a[i]<<" ";
            cout<<'\n';
            continue;
        }
        int cnt=1;
        while(cnt<n&&a[cnt]==a[cnt+1]+1) cnt++;
        if(cnt==n){
            for(int i=1;i<=n;i++) cout<<a[i]<<" ";
            cout<<'\n';
            continue;
        }
        for(int i=1;i<cnt;i++) cout<<a[i]<<" ";
        int mx=0,c;
        for(int i=cnt;i<=n;i++) if(a[i]>mx) mx=a[i],c=i;
        for(int i=c;i>=cnt;i--) cout<<a[i]<<" ";
        for(int i=c+1;i<=n;i++) cout<<a[i]<<" ";
        cout<<'\n';
    }
    return 0;
}
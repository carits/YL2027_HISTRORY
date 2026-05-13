#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int t,n,a[N];
bool vis[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) vis[i]=0;
		int pos=0;
		for(int i=n;i>=1;i--){
			if(vis[a[i]]){
				pos=i;
				break;
			}
			vis[a[i]]=1;
		}
		cout<<pos<<'\n';
	}
	return 0;
}
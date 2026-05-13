#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x,t,ans=0;
		cin>>x>>t;
		int l=n,r=n;
		while(l!=1){
			if(l<=t&&t<=r){
				break;
			}
			l/=2;
			r=r/2+r%2;
			ans++;
		}
		if(l==t||r==t){
			cout<<ans<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
	return 0;
}
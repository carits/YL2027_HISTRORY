#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int s,k,m;
		cin>>s>>k>>m;
		if(s>=k){
			int cnt=m/k;
			int t=cnt*k;
			if(cnt%2==1){
				cout<<k-(m-t)<<endl;
			}else{
				cout<<s-(m-t)<<endl;
			}
		}else{
			int cnt=m/k;
			int t=cnt*k;
			if(s-(m-t)<0){
				cout<<0<<endl;
			}else{
				cout<<s-(m-t)<<endl;
			}
		}
	}
	return 0;
}
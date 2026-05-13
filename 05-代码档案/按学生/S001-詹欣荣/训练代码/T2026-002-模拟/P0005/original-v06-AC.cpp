#include<bits/stdc++.h>
using namespace std;
string s[100005];
int a[100005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
	}
	int cnt=1;
	for(int j=1;j<=m;j++){
		int b,c;
		cin>>b>>c;
		if(a[cnt]==0&&b==0){
			cnt-=c;
			if(cnt<=0){
				cnt+=n;
			}
		}else if(a[cnt]==1&&b==1){
			cnt-=c;
			if(cnt<=0){
				cnt+=n;
			}
		}else if(a[cnt]==0&&b==1){
			cnt+=c;
			if(cnt>n){
				cnt-=n;
			}
		}else if(a[cnt]==1&&b==0){
			cnt+=c;
			if(cnt>n){
				cnt-=n;
			}
		}
	}
	cout<<s[cnt];
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
bool f=1;
int main(){
	freopen("friends.in","r",stdin);
	freopen("friends.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=1){
			f=0;
		}
	}
	if(f){
		for(int i=1;i<=n;i++){
			cout<<n/i;
		}
	}
	return 0;
}

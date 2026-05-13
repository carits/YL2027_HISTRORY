#include<bits/stdc++.h>
#define int long long  
using namespace std;
int a[100005];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>a[i];
		if(a[i]%2==0){
			if(a[i]%3==0){
				int j=a[i]/2;
				int k=a[i]/3;
				if(j%2==0){
					cout<<0<<endl;
					continue;
				}
				if(k%2==0){
					cout<<0<<endl;
					continue;
				}
				cout<<2<<endl;
				continue;
			}
			int j=a[i]/2;
			if(j%2==0){
				cout<<0<<endl;
				continue;
			}
			cout<<2<<endl;
			continue;
		}
		int j=(a[i]/2)-1;
		if(j%2==0){
			cout<<3<<endl;
			continue;
		}
		cout<<1<<endl;
	}
	
	return 0;
}
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
//		int minn=4;
//		for(int j=0;j<=a[i]/2;j++){
//			int k=(a[i]-(j*2))/3;
//			if(j*2+k*3!=a[i]){
//				continue;
//			}
//			int l=0;
//			if(j%2!=0){
//				l+=2;
//			}
//			if(k%2!=0){
//				l-=3;
//			}
//			minn=min(minn,abs(l));
//		}
//		cout<<minn<<endl;
		if(a[i]==2){
			cout<<2;
		}else if(a[i]==3){
			cout<<3;
		}else{
			cout<<a[i]%2;
		}
		cout<<endl;
	}
	
	return 0;
}
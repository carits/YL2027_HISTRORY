#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100005];
	int n;
	cin>>n;
	int i=2;
	int cnt=0;
	while(i<=n){
		bool b=true;
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				b=false;
				break;
			}
		}
		if(b){
			cnt++;
			a[cnt]=i;
//			int x=i;
//			while(x<=n){
//				x*=i;
//				cnt++;
//				a[cnt]=x;
//			}
		}
		i++;
	}
	int ans=0;
	for(int k=1;k<=n;k++){
		for(int i=1;i<=cnt;i++){
			bool b=false;
			for(int j=1;j<i;j++){
				for(int l=1;l*a[i]<=k;l++){
					for(int p=1;p*a[j]<=k;p++){
						if(a[i]*l*a[j]*p==k){
							ans++;
//							cout<<k<<" ";
							b=true;
							break;
						}
					}
					if(b){
						break;
					}
				}
				if(b){
					break;
				}
			}
			if(b){
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}
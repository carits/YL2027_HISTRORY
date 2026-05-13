#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a,b;
		cin>>a>>b;
		for(int j=1;j<b;j++){
			long long x=a;
			long long maxn=0,minn=INT64_MAX;
			while(x>=1){
				maxn=max(maxn,x%10);
				minn=min(minn,x%10);
				if(minn==0){
					break;
				}
				x/=10;
			}
			if(minn==0){
				break;
			}
			a+=maxn*minn;
		}
		cout<<a<<endl;
	}
	return 0;
}
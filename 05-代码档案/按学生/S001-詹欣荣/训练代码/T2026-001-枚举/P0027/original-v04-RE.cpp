#include<bits/stdc++.h>
using namespace std;
int b[150005];
long long an[150005];
int cnt;
void fj(int x){
	cnt=0;
	for(int i=1;i<=x;i++){
		if(x%i==0){
			cnt++;
			b[cnt]=i;
		}
	}
}
int main(){
	int t;
	cin>>t;
	for(int m=1;m<=t;m++){
		int n;
		long long ans=0;
		int a[10005];
		cin>>n;
		fj(n);
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=cnt;i++){
			long long maxn=-1,minn=INT64_MAX,c=0,h=0;
			for(int j=1;j<=n;j++){
				c++;
				h+=a[j];
				if(c==b[i]){
					c=0;
					maxn=max(maxn,h);
					minn=min(minn,h);
					h=0;
				}
			}
			ans=max(ans,maxn-minn);
			//cout<<"//"<<maxn<<"||"<<minn; 
		}
		
		an[m]=ans;
	}
	cout<<an[1];
	for(int i=2;i<=t;i++){
		cout<<endl<<an[i];
	}
	return 0;
}
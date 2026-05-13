#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100005];
	int ans[100005];
	int n,k;
	cin>>n>>k;
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
		}
		i++;
	}
	if(cnt<k){
		cout<<"NO";
		return 0;
	}
	for(int i=1;i<=cnt;i++){
		for(int j=1;j<cnt;j++){
			if(a[j]+a[j+1]>a[i]){
				break;
			}
			if(a[j]+a[j+1]+1==a[i]){
				ans[i]++;
			}
		}
	}
	int anss=0;
	for(int i=2;i<=n;i++){
		if(ans[i]>=1){
			anss++;
		}
	}
	if(anss>=k){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}
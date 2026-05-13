#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		a[i]=a[i-1];
		b[i]=b[i-1];
		char x;
		cin>>x;
		if(x=='1'){
			b[i]++;
		}else{
			a[i]++;
		}
	}
	int maxn=0;
	for(int i=2;i<=n;i++){
		for(int j=1;j<i;j++){
			if(a[i]-a[j]==b[i]-b[j]){
				maxn=max(maxn,i-j);
			}
		}
	}
	cout<<maxn;
	return 0;
}
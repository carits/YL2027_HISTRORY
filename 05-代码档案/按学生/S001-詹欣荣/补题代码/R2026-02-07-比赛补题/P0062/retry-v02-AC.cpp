#include<bits/stdc++.h>
using namespace std;
int a[10000005];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int cnt=1;
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		if(a[i]>=cnt){
			cnt++;
		}else{
			while(a[i]<cnt&&i<=n){
				i++;
			}
			if(a[i]>=cnt){
				cnt++;
			}
		}
	}
	cout<<cnt-1;
	return 0;
}
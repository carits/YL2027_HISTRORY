#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int t=240;
	t-=k;
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(t-i*5>=0){
			cnt++;
			t-=i*5;
		}
	}
	cout<<cnt;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		int cnt=0,j=0;
		while(j*4<=n){
			if((n-j*4)%2==0){
				cnt++;
			}
			j++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
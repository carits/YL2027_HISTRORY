#include<bits/stdc++.h>
using namespace std;
int main(){
	int cnt=0;
	int n,x,y;
	string s;
	cin>>n>>x>>y>>s;
	for(int i=n-x;i<n;i++){
		if(i==n-y-1&&s[i]=='0'){
			cnt++;
		}else if(i!=n-y-1&&s[i]=='1'){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
	
}
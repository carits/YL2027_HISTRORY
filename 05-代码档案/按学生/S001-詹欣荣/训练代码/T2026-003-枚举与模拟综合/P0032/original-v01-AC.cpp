#include<bits/stdc++.h>
using namespace std;
string s[100005];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	int ans=0;
	for(int a=0;a<=25;a++){
		for(int b=0;b<=25;b++){
			int c=0;
			for(int i=1;i<=n;i++){
				int d=0;
				for(int j=0;j<s[i].size();j++){
					if(s[i][j]-'a'==a||s[i][j]-'a'==b){
						d++;
					}else{
						d=0;
						break;
					}
				}
				c+=d;
			}
			ans=max(ans,c);
		}
	}
	cout<<ans;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int a[155][155];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int cnt;
		cin>>cnt;
		memset(a,0,sizeof(a));
		string s;
		cin>>s;
		int x=0,y=0;
		for(int j=0;j<s.size();j++){
			if(s[j]=='U'){
				y++;
				a[x+56][y+56]=1;
			}
			if(s[j]=='D'){
				y--;
				a[x+56][y+56]=1;
			}
			if(s[j]=='L'){
				x--;
				a[x+56][y+56]=1;
			}
			if(s[j]=='R'){
				x++;
				a[x+56][y+56]=1;
			}
		}
		if(a[57][57]==1){
			cout<<"YES";
		} else{
			cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}
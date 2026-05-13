#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e2+5;
string s1,s2;
int n,m,k,cnt;
int ji1,ji2,j3,j4;
map<string,int>mp;
signed main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			string stk;
			for(int l=1;l<=k;l++){
				char a;
				cin>>a;
				stk+=a;
			}
			mp[stk]++;
			if(mp[stk]==1&&cnt==0){
				ji1=i,ji2=j;
				s1=stk;
				cnt++;
			}else if(mp[stk]==1){
				j3=i,j4=j;
				s2=stk;
			}
		}
	}
	if(mp[s1]==1){
		cout<<ji1<<" "<<ji2;
	}else{
		cout<<j3<<" "<<j4;
	}
	return 0;
}
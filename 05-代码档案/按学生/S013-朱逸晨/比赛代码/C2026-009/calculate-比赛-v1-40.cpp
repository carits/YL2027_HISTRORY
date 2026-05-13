#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
string b,c;
bool f=1;
string cheng(string x,string y){
	reverse(x.begin(),x.end());
	reverse(y.begin(),y.end());
	int z[x.size()+y.size()+1]={0};
	for(int i=0;i<x.size();i++){
		for(int j=0;j<y.size();j++){
			z[i+j]+=(x[i]-'0')*(y[j]-'0');
		}
	}
	for(int i=0;i<x.size()+y.size();i++){
		z[i+1]+=z[i]/10;
		z[i]%=10;
	}
	string ans="";
	bool e=0;
	for(int i=x.size()+y.size();i>=0;i--){
		if(z[i]){
			e=1;
		}
		if(e){
			ans+=z[i]+'0';
		}
	}
	return ans;
}
int main(){
	freopen("calculate.in","r",stdin);
	freopen("calculate.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=10){
			f=0;
		}
	}
	cin>>b>>c;
	if(f){
		cout<<cheng(b,c);
	}
	return 0;
}

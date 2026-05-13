#include<bits/stdc++.h>
using namespace std;
string a[10005];
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	string q="";
	for(int i=0;i<k;i++){
		q+=a[1][i];
	}
	string s="";
	for(int i=k;i<k*2;i++){
		s+=a[1][i];
	}
	if(s!=q){
		string e="";
		for(int i=0;i<k;i++){
			e+=a[1][i];
		}
		if(s==e){
			cout<<1<<""<<1;
			return 0;
		}if(e==q){
			cout<<1<<" "<<2;
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			string r="";
			for(int f=j*k-k;f<=j*k-1;f++){
				r+=a[i][f];
			}
			if(r!=q){
				cout<<i<<" "<<j;
				return 0;
			}
		}
	}
	return 0;
	
}
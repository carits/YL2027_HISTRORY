#include<bits/stdc++.h>
using namespace std;
int a,b[100001],c,d;
int main(){
	freopen("friends.in","r",stdin);
	freopen("friends.out","w",stdout);
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b[i];
		c=max(c,b[i]);
		d+=b[i];
	}for(int i=1;i<=a;i++){
		for(int j=i;j<=a;j++){
			if(d%j==0){
				cout<<d/j<<" ";
				break;
			}
		}
	}
}

#include<bits/stdc++.h>
using namespace std;
int a,b[1000000],c[200001];
int main(){
	cin>>a;
	int s=1;
	for(int i=1;i<=a;i++){
		cin>>b[i];
	}for(int i=1;i<=a;i++){
		if(b[s]*2<b[i]){
			s++;
		}for(int j=s;j<=i;j++){
			c[j]++;
		}
	}sort(c+1,c+a+1);
	cout<<c[a];
}
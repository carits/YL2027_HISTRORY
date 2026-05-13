#include<bits/stdc++.h>
using namespace std;
int a,b[200001],c=1,e=1;
int main(){
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b[i];
	}for(int i=2;i<=a;i++){
		if(b[i-1]*2<b[i]){
			e=0;
		}e++;
		c=max(c,e);
	}cout<<c; 
}
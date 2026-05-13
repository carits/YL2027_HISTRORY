#include<bits/stdc++.h>
using namespace std;
int a,b[200001],c=1;
int main(){
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b[i];
	}for(int i=1;i<=a;i++){
		int l=i,r=a,mid;
		while(l<r){
			mid=(l+r+1)/2;
			if(b[i]*2<b[mid]){
				r=mid-1;
			}else{
				l=mid;
			}
		}c=max(c,l-i+1);
	}cout<<c; 
}
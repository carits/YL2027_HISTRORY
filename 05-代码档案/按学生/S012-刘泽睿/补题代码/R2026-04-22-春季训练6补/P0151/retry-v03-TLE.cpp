#include<bits/stdc++.h>
using namespace std;
int a,b[200001],c;
int main(){
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b[i];
	}for(int i=1;i<=a;i++){
		int l=i,r=a,mid;
		c=1;
		while(l<r){
			mid=(l+r)/2; 
			if(b[l]*2<b[mid]){
				r=mid-1;
			}else{
				l=mid; 
			}
		}c=max(c,l);
	}
}
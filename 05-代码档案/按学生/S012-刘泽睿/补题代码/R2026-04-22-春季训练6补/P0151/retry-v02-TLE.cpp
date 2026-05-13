#include<bits/stdc++.h>
using namespace std;
int a,b[1000000],c=1;
void f(int l,int r){
	if(l==r)return;
	int mid=(l+r)/2;
	f(l,mid);
	f(mid+1,r);
	for(int i=1;i<=a;i++){
		for(int j=mid+1;j<=a;j++){
			if(b[i]*2<b[j]){
				break;
			}c=max(c,j-i+1);
		}
	}return;
} 
int main(){
	cin>>a;
	int s=1;
	for(int i=1;i<=a;i++){
		cin>>b[i];
	}f(1,a);
	cout<<c;
}
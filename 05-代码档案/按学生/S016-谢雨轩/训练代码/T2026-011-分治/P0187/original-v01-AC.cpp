#include<bits/stdc++.h>
using namespace std;
int n;
int a[500005]={};
int b[500005]={};
long long s;
void m(int l,int mid,int r){
	int d1=l;
	int d2=mid+1;
	int k=l;
	while(d1<=mid&&d2<=r){
		if(a[d1]<=a[d2]){
			b[k++]=a[d1++];		
		}
		else{
			b[k++]=a[d2++];
			s+=mid+1-d1;		
		}
	}
	while(d1<=mid){
		b[k++]=a[d1++];
	}
	while(d2<=r){
		b[k++]=a[d2++];
	}
	for (int i=l;i<=r;i++){
		a[i]=b[i];
	}
}
void msort(int l,int r){
	if(l>=r){
		return;
	}
	int mid=(l+r)/2;
	msort(l,mid);
	msort(mid+1,r);
	m(l,mid,r);
	return; 
}
int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	msort(1,n);
	cout<<s;
	return 0;
}
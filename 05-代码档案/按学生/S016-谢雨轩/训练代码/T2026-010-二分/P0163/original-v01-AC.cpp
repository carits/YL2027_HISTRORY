#include<bits/stdc++.h>
using namespace std;
int n,k;
int h;
bool check(int v){
	int n1=n,k1=1,w=v/k1;   
	while(w!=0&&n1>0){   
		n1-=w;
		k1*=k;
		w=v/k1;
	}
	if(n1<=0){
		return 1; 
	} 
	else{
		return 0;	
	}	
}
int main(){
	cin>>n>>k;
	int l=1,r=n;
	while(l<=r){
		int mid=(l+r)/2;
		if(check(mid)){
			r=mid-1;
			h=mid;
		}
		else{
			l=mid+1;
		}
	}
	cout<<h;
	return 0;
}
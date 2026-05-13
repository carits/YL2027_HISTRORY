#include<bits/stdc++.h>
using namespace std;
const int maxn=20;
int a[4]={2,3,5,7};
int b[4]={1,3,7,9};
int n;
void find(int t,int z){
	for(int i=2;i*i<=t;i++) if(t%i==0) return;
	if(z==n){
		cout<<t<<"\n";
	}
	if(z==0){
		for(int i=0;i<4;i++){
			find(t*10+a[i],z+1);
		}
	}
	else{
		for(int i=0;i<4;i++){
			find(t*10+b[i],z+1);
		}
	}
}
int main(){
	cin>>n;
	find(0,0);
    return 0;
}
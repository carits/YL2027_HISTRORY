#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  	int n;
  	cin>>n;
	long long l=0,r=1e9;
	while(l<r){ 
		long long t=l+(r-l)/2;
    	long long pos=t*log10(t)+1;
    	//cout<<l<<"/"<<r<<" ";
    	if(n<=pos){
			r=t;
		}else{
			l=t+1;
		}
  	}
  	cout<<l;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t=0;
	cin>>t;
	while(t--){
		int n,k,a,b;
		cin>>k>>n>>a>>b;
		if((k-1)/b<n){
			cout<<-1<<endl;
			continue;
		}
		int x=a-b;
		int kk=k-(b*n);
		int h=(kk-1)/x;
		//cout<<x<<" "<<kk<<" "<<h;
		if(h>n){
			cout<<n<<endl;
		}else{
			cout<<h<<endl;
		}
	}
	return 0;
}
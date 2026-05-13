#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int t,n,a[N]; 
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0); 
	cin>>t;
	while(t--){
		int cnt=0;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++){
			for(int j=a[i]-i;j<=n;j+=a[i]){
    			if(i>=j) continue;
        		if(a[i]*a[j]==i+j) cnt++;
   			}
		}
   		cout<<cnt<<'\n';
	}			
	return 0;
}
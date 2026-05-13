#include <bits/stdc++.h>
using namespace std;
long long num[10005];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    long long t;
    cin>>t;
    while(t--){
		long long n;
		cin>>n;
		long long cnt=0;
		while(n>0){
			cnt++;
			num[cnt]=n%10;
			n/=10;
		}
		if(num[cnt]!=1){
			cout<<"NO"<<'\n';
			continue;
		}
		if(num[1]==9){
			cout<<"NO"<<'\n';
			continue;
		}
		bool b=true;
		for(long long i=2;i<cnt;i++){
			if(num[i]-1<0){
				cout<<"NO"<<'\n';
				b=false;
				break;
			}
		}
		if(b){
			cout<<"YES"<<'\n';
		}
	}
    return 0;
}
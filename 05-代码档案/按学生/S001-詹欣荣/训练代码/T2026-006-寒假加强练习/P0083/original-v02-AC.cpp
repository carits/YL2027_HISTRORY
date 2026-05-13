#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll cc[105][105];
int main(){
	for (int i=0;i<30;++i) {
	    for (int j = 0; j < 30; ++j) {
	        if (i < j) cc[i][j] = 0;
	        else if (j == 0) cc[i][j] = 1;
	        else cc[i][j] = cc[i - 1][j] + cc[i - 1][j - 1];
	    }
	}
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++){
		ll n,k,cnt=0;
		cin>>n>>k;
		int d=0;
		while (n%2==0) {
		    n/=2;
		    ++d;
		}
		for(int j=0;j<d;++j){
			for(int l=1;l<=j+1;++l){
				if(j+l<=k){
					continue;
				}
				cnt+=cc[j][l-1];
			}
		}
		if(d>=k){
			cnt++;
		}
		cout<<cnt<<endl;
	}
    return 0;
}
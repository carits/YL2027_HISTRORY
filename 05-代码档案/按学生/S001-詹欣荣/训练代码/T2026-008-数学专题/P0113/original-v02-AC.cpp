#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,x,y;
        cin>>n>>x>>y;
        int c=y-x;
        for(int i=1;i<=c;i++){
			if(c%i!=0){
				continue;
			}
			if((c/i)+1>n){
				continue;
			}
			int k=min((y-1)/i,n-1);
			int l=y-(k*i);
			for(int j=1;j<=n;j++){
				cout<<l+i*(j-1)<<" ";
			}
			cout<<'\n';
			break;
		}
    }
    return 0;
}
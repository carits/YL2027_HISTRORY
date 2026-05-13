#include<bits/stdc++.h>
#define in long long
using namespace std;
int main(){
    in t;
    cin>>t;
 	for(in i=1;i<=t;i++){
 		in n;
 		cin>>n;
 		in a[n+1]={};
 		in b[n+1]={};
 		in sum[n+1]={};
 		for(in j=1;j<=n;j++){
		 	cin>>a[j];
		}
		for(in j=1;j<=n;j++){
			cin>>b[j];
			sum[j]=sum[j-1]+b[j];
		}
		sort(a+1,a+n+1);
		in m=n;
		in ans=0;
		long long maxn=0;
		for(in j=1;j<=n;j++){
			int pos=upper_bound(sum+1,sum+n+1,m)-sum;
			maxn=max(maxn,(pos-1)*a[j]);
			m--;
		}
		cout<<maxn<<endl;
 	}
    return 0;
}
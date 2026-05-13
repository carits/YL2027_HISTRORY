#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL a[100005];
LL b[100005];
int main(){
	LL t;
	cin>>t;
	for(LL i=1;i<=t;i++){
		cin>>a[i]>>b[i];
	}
	for(LL i=1;i<=t;i++){
		LL shan=a[i];
		LL z=a[i];
		for(LL j=1;j<=b[i]-1;j++){
			LL k=0; 
			LL maxn=0;
			LL minn=INT64_MAX;
			while(shan>0){
				k++;
				maxn=max(maxn,shan%10);
				minn=min(minn,shan%10);
				shan/=10;
			}
			z=z+maxn*minn;
			shan=z;
			if(z==0){
				break;
			}
		}
		cout<<z<<endl;
	}
	return 0;
}
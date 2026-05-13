#include<bits/stdc++.h>
using namespace std;
long long a[5000000];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for (int j=i+1;j<=n;j++) {
			if(a[i]+a[j]>0 && (a[i]+a[j]&(a[i]+a[j]-1))==0){
				ans++;
			}
		}
	}
	cout<<ans;
    return 0;
}
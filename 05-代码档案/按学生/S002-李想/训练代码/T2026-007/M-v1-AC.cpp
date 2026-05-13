#include<bits/stdc++.h>
using namespace std;

int n,k,ans;
int const N=3e5+5;
int a[N],cha[N];
int main(){
	cin>> n >> k;
	for(int i=1;i<=n;i++)cin>> a[i];
	for(int i=1;i<n;i++)cha[i]=a[i+1]-a[i];
	sort(cha+1,cha+n+1);
	for(int i=1;i<=n-k+1;i++)ans+=cha[i];
	cout<< ans;
	return 0;
}
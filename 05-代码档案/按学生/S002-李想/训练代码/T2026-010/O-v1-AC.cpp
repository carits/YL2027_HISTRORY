#include<bits/stdc++.h>
using namespace std;

const int N=1e6+10;
int n,k,ans;
int a[N];
bool check(int step){
	int sum=1,last=a[1];
    for(int i=2;i<=n;i++){
        if(a[i]-last>=step)sum++,last=a[i];
    }
    if(sum>=k)ans=step;
    return sum>=k;
}
int main(){
	cin>> n >> k;
	for(int i=1;i<=n;i++)cin>> a[i];
    sort(a+1,a+n+1);
	int l=1,r=a[n];
	while(l<=r){
		int mid=l+(r-l)/2;
		if(check(mid))l=mid+1;
		else r=mid-1;
	}
	cout<< ans;
	return 0;
}
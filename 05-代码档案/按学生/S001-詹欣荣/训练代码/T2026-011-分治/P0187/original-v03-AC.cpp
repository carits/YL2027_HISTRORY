#include<bits/stdc++.h>
using namespace std;
long long a[10000005];
long long tmp[10000005];
long long cnt=0;
void gb(long long l,long long r){
	if(l==r){
		return ;
	}
	long long mid=(l+r)/2;
	gb(l,mid);
	gb(mid+1,r);
	long long i=l,j=mid+1,k=l;
	while(i<=mid&&j<=r){
		if(a[i]<=a[j]){
			tmp[k++]=a[i++];
		} else{
			tmp[k++]=a[j++];
			cnt+=(mid+1)-i;
		}
	}
	while(i<=mid){
		tmp[k]=a[i];
		i++;
		k++;
	}
	while(j<=r){
		tmp[k]=a[j];
		j++;
		k++;
	}
	for(k=l;k<=r;k++){
		a[k]=tmp[k];
	}
	return ;
}
int main(){
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	gb(1,n);
	cout<<cnt;
	return 0;
}
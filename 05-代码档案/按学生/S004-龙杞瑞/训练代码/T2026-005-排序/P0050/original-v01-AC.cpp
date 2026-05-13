#include<bits/stdc++.h>
using namespace std;
struct node{
	int bianhao,fenshu;
}a[10000];
bool cmp(const node &x,const node &y){
	if(x.fenshu!=y.fenshu){
		return x.fenshu>y.fenshu;
	}
	return x.bianhao<y.bianhao;
}
int n,m,cnt;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].bianhao>>a[i].fenshu;
	} 
	m*=1.5;
	m=floor(m);
	sort(a+1,a+n+1,cmp);
	cout<<a[m].fenshu<<" ";
	for(int i=1;i<=n;i++){
		if(a[i].fenshu>=a[m].fenshu) cnt++;
	}
	cout<<cnt<<endl;
	for(int i=1;i<=cnt;i++){
		cout<<a[i].bianhao<<" "<<a[i].fenshu<<endl;
	}
	return 0;
}
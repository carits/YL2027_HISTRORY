#include<bits/stdc++.h>
using namespace std;
struct node{
	int c,s,e;
	int zf;
	int num;
};
bool cmp(node x,node y){
	if(x.zf!=y.zf){
		return x.zf>y.zf;
	}
	if(x.c!=y.c){
		return x.c>y.c;
	}
	return x.num<y.num;
}
int n;
node a[2000000];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].c>>a[i].s>>a[i].e;
		a[i].zf=a[i].c+a[i].s+a[i].e;
		a[i].num=i;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=5;i++){
		cout<<a[i].num<<" "<<a[i].zf<<endl;
	}
	return 0;
}
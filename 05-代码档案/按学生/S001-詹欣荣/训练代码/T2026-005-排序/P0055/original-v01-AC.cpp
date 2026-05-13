#include <bits/stdc++.h>
using namespace std;
int h;
struct node{
	int sc[1005];
	int id;
}a[1005];
bool cmp(node A,node B){
	return A.sc[h]>B.sc[h];
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i].sc[j];
		}
		a[i].id=i;
	}
	for(int i=1;i<=m;i++){
		h=i;
		sort(a+1,a+n+1,cmp);
		for(int j=1;j<=n;j++){
			cout<<a[j].id<<" ";
		}
		cout<<endl;
	}
	return 0;
}
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e7+5;
int n,m,pos;
struct node{
	int op;
	string stk;
}a[N];
signed main(){
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i].op>>a[i].stk;
	while(m--){
		int d,s;
		cin>>d>>s;
		if(a[pos].op==0&&d==1) pos=(pos+s)%n;
		else if(a[pos].op==1&&d==0) pos=(pos+s)%n;
		else if(a[pos].op==0&&d==0) pos=(pos-s+n)%n;
		else if(a[pos].op==1&&d==1) pos=(pos-s+n)%n;
	}
	cout<<a[pos].stk;
	return 0;
} 
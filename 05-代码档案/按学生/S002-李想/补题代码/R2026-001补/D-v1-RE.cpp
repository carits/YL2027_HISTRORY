#include<bits/stdc++.h>
using namespace std;

int t,n,x,y;
int	const N=1e5+5;
int a[N];
void slove(){
	cin>> n >> x >> y;
	for(int i=1;i<=n;i++)cin>> a[i];
	vector<int>v;
	int id=x+1;
	for(int i=x+1;i<=y;i++){
		if(a[id]>a[i])id=i;
	}
	int pos=id;
	while(true){
	    v.push_back(a[pos]);
        if(pos==y)pos=x+1;
		else pos++;
	    if(pos==id)break;
	}
	for(int i=x+1;i<=y;i++)a[i]=v[i-x-1];
	vector<int>	v1,va,v2;
	for(int i=1;i<=n;i++){
		if(i>x&&i<=y)continue;
		v1.push_back(a[i]);
	}
	bool flag=0;
	for(int i:v1){
		if(i>a[x+1])flag=1;
		if(flag)v2.push_back(i);
		else va.push_back(i);
	}
	for(int i:va)cout<< i << " ";
	for(int i=x+1;i<=y;i++)cout<< a[i] << " ";
	for(int i:v2)cout<< i << " ";
	cout<< "\n";
}
int main(){
	cin>> t;
	while(t--)slove();
	return 0;
}
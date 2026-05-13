#include<bits/stdc++.h>
using namespace std;
int n;
string a[50005];
string d; 
bool cmp(string a,string b){
	return a+b<b+a;
}
int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for (int i=1;i<=n;i++){
		d+=a[i];
	}
	cout<<d;
	return 0;
}
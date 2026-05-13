#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int n;
string s[N];
bool cmp(string x,string y){
	return x+y<y+x;
}
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>s[i];
	sort(s+1,s+n+1,cmp);
	for(int i=1;i<=n;i++) cout<<s[i]; 
	return 0;
}
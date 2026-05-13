#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n,m,ans;
int const N=1e5+5;
int xp[N];
void slove(){
	map<int,int>mp;
	cin>> n >> m;
	for(int i=1;i<=n;i++){
		cin>> xp[i];
		mp[xp[i]]++;
	}
	for(int i=1,x;i<=m;i++){
		cin>> x;
        mp[x]++;
	}
    for(int i=1;i<=n;i++){
        if(mp[xp[i]]==2)cout<< xp[i] << " ";
	}
}
signed main(){
	t=1;
	while(t--)slove();
	return 0;
}
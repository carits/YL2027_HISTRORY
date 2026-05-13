#include <bits/stdc++.h>
using namespace std;
int n,m;
int d[5][10]={20,20,20,20,20,0,0,0,0,0,20,20,20,20,20,0,0,0,0,0,20,20,10,30,20,0,0,0,0,0,25,25,30,20,0,0,0,0,0,0,15,15,15,10,10,15,20,0,0,0};
int main() {	
	freopen("skill.in", "r", stdin);
	freopen("skill.out", "w", stdout);
	cin>>n>>m;
	cout<<d[n][m-1];
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[5][10]={{0},{20,20,20,20,20},{20,20,10,30,20},{25,25,30,20},{15,15,15,10,10,15,20}};
int main(){
	freopen("skill.in","r",stdin);
	freopen("skill.out","w",stdout);
	cin >> n >> m;
	cout << a[n][m-1];
	return 0;
}


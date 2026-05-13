#include<bits/stdc++.h>
using namespace std;
int t;
int n, k;
int a[200005];
void so(){
	cin >> n >> k;
	string s;
	cin >> s;
	for(int i = 0; i < n; i++){
		if(s[i] == 'B') a[i + 1] = 1;
		else a[i + 1] = 0;
	}
	int ans = 0;
	for(int i = 1;i <= n; i++){
		if(a[i] == 1){
			ans++;
			i += k - 1;
		}
	}
	cout << ans << '\n';
}
int main(){
	cin >> t;
	while(t--){
		so();
	}	
	return 0;
}
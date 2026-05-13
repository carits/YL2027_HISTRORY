#include<bits/stdc++.h>
using namespace std;
int t, n, m;
string x, s;
int main(){
	cin >> t;
	while(t--){
		cin >> n >> m >> x >> s;
		int cnt = 0;
        bool dx = 0;
		while(cnt<=10){
			int o = x.find(s);
			if(o != -1){
				dx = 1;
				break;
			}
			cnt++;
			x += x;
		}
		if(dx) cout << cnt << "\n";
		else cout << "-1\n";
	}
	return 0;
}
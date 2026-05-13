#include <bits/stdc++.h>
using namespace std;
int t;
bool vis[1000005];
void ycl(){
	int syg, p;
	for(int i = 2;i <= 1005; i++){
		syg = i,p = i + 1;
		while(1){
			syg = syg * i;
			p = p + syg;
			if(p > 1e6) break;
			vis[p]=1;
		}
	}
}
void so(){
	int n;
	cin >> n;
	if(vis[n]) cout << "YES\n";
	else cout << "NO\n";
}
int main(){
    ycl();
    cin >> t;
    while(t--){
        so();
    }
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
int T, k, n, a, b; 
inline int read(){
    int x = 0, f = 1; 
    char ch = getchar();
    while(ch < '0' || ch > '9'){
        if (ch == '-') f = -1; 
        ch = getchar();
    }
	while(ch >= '0' && ch <= '9'){
            x = x * 10 + ch - 48;
            ch = getchar();
	}
	return x * f;
}
bool check(int x){
	if((k- (n - x) * b) - x * a  > 0) return 1;
	return 0;
}
int ef (int l, int r){
    while (l + 1 < r) {
        int m = l + (r - l) / 2;
        if (check(m)) l = m;
        else r = m;
    }
    return l;
}
signed main(){
	T = read();
	while(T--){
		k= read(), n = read(), a = read(), b = read();
        if (b * n >= k){
            cout << "-1\n";
            continue;
        }
        cout << ef(0, n + 1) << '\n';
	}
	
	
	return 0;
}
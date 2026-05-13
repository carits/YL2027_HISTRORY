#include <bits/stdc++.h>
using namespace std;
long long n, m, a[5000005], l, r, c, d[5000005], minn = 2e9;
inline int read()
{
	int x = 0, f = 1; char ch = getchar();
	while(ch < '0' || ch > '9') {if(ch == '-') f = -1; ch = getchar();}
	while(ch >= '0' && ch <= '9') { x = x * 10 + ch - 48; ch = getchar();}
	return x * f;
}
int main(){
    n = read(), m = read();
    for (int i = 1; i <= n; i++) a[i] = read();
    for (int i = 1; i <= m; i++){
        l = read(), r = read(), c = read();
        d[l] += c;
        d[r + 1] -= c;
    }
    for (int i = 1; i <= n; i++){
        d[i] += d[i - 1];
        minn = min(minn, d[i] + a[i]);
    }
    cout <<minn;
    return 0;
}
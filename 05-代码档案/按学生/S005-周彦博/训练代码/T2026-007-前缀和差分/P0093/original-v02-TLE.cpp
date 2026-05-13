#include <bits/stdc++.h>
using namespace std;
int n, z[100005], y[100005];
string s;
//inline int read()
//{
//	int x = 0, f = 1; char ch = getchar();
//	while(ch < '0' || ch > '9') {if(ch == '-') f = -1; ch = getchar();}
//	while(ch >= '0' && ch <= '9') { x = x * 10 + ch - 48; ch = getchar();}
//	return x * f;
//}
int main(){
	memset(z, -0x3f, sizeof(z));
	memset(y, -0x3f, sizeof(y));
	z[0] = 0;
	y[0] = 0;
    cin >> n >> s;
    s = " " + s;
    for (int i = 1; i <= n; i++){
    	if (s[i] == '0') {
			z[i] = z[i - 1] + 1;
			y[i] = y[i - 1];
    	}
    	else {
			y[i] = y[i - 1] + 1;
			z[i] = z[i - 1];
    	}
    }
    int maxn = 0;
    if (y[n] == 0 || z[n] == 0){
    	cout << 0;
    	return 0;
    }
    for (int i = 1; i <= n; i++){
    	for (int j = i + 1; j <= n; j++){
    		if (z[j] - z[i - 1] == y[j] - y[i - 1]) maxn = max(maxn, j - i + 1);
    	}
    }
    cout << maxn;
    return 0;
}
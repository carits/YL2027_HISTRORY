#include<bits/stdc++.h>
using namespace std;
int n, k;
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
int main(){
	n = read(), k = read(); 
	for(int x = 1; x <= n; x++) if(k + x * (x + 1) * 2.5 > 240){cout << x - 1; return 0;}
	cout << n;
	return 0;
}
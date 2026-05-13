#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n, g, a[N], T, ans;
inline bool check(int x){
	if(x == n) return 1;
	g = abs(a[1 + x] - a[1]);
	for(int i = 1; i <= n - x; i++){
		g = __gcd(g, abs(a[i + x] - a[i]));
		if(g == 1) return 0;
	}
	return 1;
}
int main(){
	scanf("%d", &T);
	while(T--){
		scanf("%d", &n);
		for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
		ans = 0;
		for(int i = 1; i * i <= n; i++){
			if(n % i == 0){
				if(check(i)) ans++;
				if(n / i != i && check(n / i)) ans++;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
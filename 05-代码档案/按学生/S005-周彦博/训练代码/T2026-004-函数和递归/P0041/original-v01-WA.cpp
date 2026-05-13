#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;
char a, b, c;
void dfs(int x, char a, char b, char c){
	if (x == 0) return;
	dfs(x - 1, a, b, c);
	cout << x << ":" << a << "->" << c << "\n";
	dfs(x - 1, b, a, c);
}
int main(){
	IOS
    cin >> n >> a >> b >> c;
    dfs(n, a, b, c);
    return 0;
}
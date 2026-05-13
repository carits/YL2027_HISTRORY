#include <bits/stdc++.h>
using namespace std;
int n, s[100005];
string st;
map <int, int>mp;
//inline int read()
//{
//	int x = 0, f = 1; char ch = getchar();
//	while(ch < '0' || ch > '9') {if(ch == '-') f = -1; ch = getchar();}
//	while(ch >= '0' && ch <= '9') { x = x * 10 + ch - 48; ch = getchar();}
//	return x * f;
//}
int main(){
    cin >> n >> st;
    st = " " + st;
    mp[0] = 1;
    mp[1] = 1;
    for (int i = 1; i <= n; i++){
    	if (st[i] == '0') s[i] = s[i - 1] + 1;
    	else s[i] = s[i - 1] - 1;
    	if (mp[s[i]] == 0) mp[s[i]] = i;
    }
    int maxn = 0;
    for (int i = 1; i <= n; i++){
//    	if(s[i] == 0){
    		maxn = max(maxn, i - mp[s[i]]);
//    	}
    }
    cout << maxn;
    return 0;
}
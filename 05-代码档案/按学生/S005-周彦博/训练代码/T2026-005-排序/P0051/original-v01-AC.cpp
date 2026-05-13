#include <bits/stdc++.h>
#define int long long
using namespace std;
struct node{
    int gd, lq;
} a[1000005];
bool cmp(const node &a, const node &b){
    return a.lq < b.lq;
}
int n, s, cnt, c, b;
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	cin >> n >> s >> c >> b;
	for (int i = 1; i <= n; i++) cin >> a[i].gd >> a[i].lq; 
	sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++){
        if (a[i].gd > c + b) continue;
        if (s >= a[i].lq) cnt++;
        else break;
        s -= a[i].lq;
    }
    cout << cnt;
    
}
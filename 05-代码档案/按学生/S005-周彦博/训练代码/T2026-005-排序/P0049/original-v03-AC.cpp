#include <bits/stdc++.h>
using namespace std;
struct node{
    int id, yu, shu, ying, zong;
} a[1000005];
bool cmp(const node &a, const node &b){
    if(a.zong != b.zong) return a.zong > b.zong;
    else if (a.yu != b.yu) return a.yu > b.yu;
    else return a.id < b.id;
}
int n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++){
        cin >> a[i].yu >> a[i].shu >> a[i].ying;
        a[i].id = i;
        a[i].zong = a[i].yu + a[i].shu + a[i].ying;
    }
	sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= 5; i++) cout << a[i].id << ' ' << a[i].zong << '\n';
}
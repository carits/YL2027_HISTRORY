#include <bits/stdc++.h>
using namespace std;
struct node{
    int id, fs;
} a[1000005];
bool cmp(const node &a, const node &b){
    return a.fs < b.fs;
}
int n, cnt;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++){
        cin >> a[i].fs;
        a[i].id = i;
    }
	sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) cout << a[i].id << ' ';
}
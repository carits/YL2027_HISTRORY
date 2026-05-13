#include <bits/stdc++.h>
using namespace std;
struct node{
    int id, fs;
} a[1000005];
bool cmp(const node &a, const node &b){
    if (a.fs != b.fs)return a.fs > b.fs;
    else return a.id < b.id;
}
int n, m, cnt;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i].id >> a[i].fs; 
	sort(a + 1, a + n + 1, cmp);
    int b = a[int(m * 1.5)].fs;
    cout << b << ' ';
    for (int i = 1; i <= n; i++){
        if (a[i].fs >= b){
            cnt++;
        }
    }
    cout << cnt << endl;
    for (int i = 1; i <= n; i++){
        if (a[i].fs >= b){
            cout << a[i].id << ' ' << a[i].fs << endl;
        }
    }
}
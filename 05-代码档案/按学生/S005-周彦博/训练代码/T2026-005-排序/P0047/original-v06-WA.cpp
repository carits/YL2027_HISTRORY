#include <bits/stdc++.h>
using namespace std;
long long a[100005], n, b[100005], cnt;
void dg(int l, int r){
    if (r - l + 1 == 1)return;
    int c = (l + r) / 2;
    dg(l, c);
    dg(c + 1, r);
    int l1 = l, r1 = c + 1, pos = 1;
    while(pos <= r){
        if (l1 > c){
            b[pos] = a[r1];
            r1++;
        }
        else if (r1 > r){
            cnt += r - c;
            b[pos] = a[l1];
            l1++;
        }
        else if (a[l1] > a[r1]){
            b[pos] = a[r1];
            r1++;
        }
        else {
            cnt += r1 - c - 1;
            b[pos] = a[l1];
            l1++;
        }
        pos++;
    }
    for (int i = l; i <= r; i++) a[i] = b[i];
}
int main(){
	cin >> n;
	for (int i = 1; i <= n; i++)cin >> a[i];
	dg(1, n);
    cout << cnt;
}
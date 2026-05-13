#include <bits/stdc++.h>
using namespace std;
int n, m;
struct node{
    int a[15];
} a[10005];
bool cmp(const node &a, const node &b){
    for (int i = 1; i <= m; i++){
        if (a.a[i] == b.a[i])continue;
        return a.a[i] > b.a[i];
    }
    return 0;
}
int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i].a[j];
        }
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cout << a[i].a[j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
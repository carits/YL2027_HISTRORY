#include <bits/stdc++.h>
using namespace std;
#define int long long
struct node{
    int a;
    string s;
};
node a[100005];
int n, m;
signed main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i].a >> a[i].s;
    int x, y, i = 1;
    while(m--){
        cin >> x >> y;
        if (x == 0){
            if (a[i].a == 0) i -= y;
            else i += y;
        }
        while(i < 1) i += n;
        while(i > n) i -= n;
    }
    cout << a[i].s;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[10], h, ans = 0;
    for(int i = 0; i < 10; i++) cin >> a[i];
    cin >> h;
    h += 30;
    for(int x: a) if(x <= h) ans++;
    cout << ans << "\n";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int n, a, b, c, cnt;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){ 
        cin >> a >> b >> c;
        if ((a && b) || (b && c) || (a && c)) cnt++;
    }
    cout << cnt;
    return 0;
}
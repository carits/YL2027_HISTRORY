#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b) swap(a, b);
        int cnt = 0;
        while(a < b){
            a += c;
            b -= c;
            cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}
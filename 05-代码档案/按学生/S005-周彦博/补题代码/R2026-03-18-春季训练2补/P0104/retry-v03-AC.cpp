#include <bits/stdc++.h>
using namespace std;
int t, n;
int main(){
    cin >> t;
    while(t--){
        cin >> n;
        int cnt = 0, a, b;
        while(n--){
            cin >> a >> b;
            if (a > b) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
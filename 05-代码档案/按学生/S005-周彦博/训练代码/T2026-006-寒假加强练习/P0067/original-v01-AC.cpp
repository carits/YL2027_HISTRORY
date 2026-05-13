#include <bits/stdc++.h>
using namespace std;
int n, t;
int main(){
    cin >> t;
    while(t--){
        cin >> n;
        if (n % 4 == 0){
            cout << 0 << endl;
            continue;
        }
        if (n % 4 == 1){
            cout << 1 << endl;
            continue;
        }
        if (n % 4 == 2){
            if (n >= 6) cout << 0 << endl;
            else cout << 2 << endl;
            continue;
        }
        if (n % 4 == 3){
            if (n >= 7) cout << 1 << endl;
            else cout << 3 << endl;
            continue;
        }
    }
    return 0;
}
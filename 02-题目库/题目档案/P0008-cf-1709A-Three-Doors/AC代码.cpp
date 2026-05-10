#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int x;
        cin >> x;
        vector<int> a(4);
        cin >> a[1] >> a[2] >> a[3];
        int cnt = 0;
        while(x && cnt < 3){
            cnt++;
            x = a[x];
        }
        cout << (cnt == 3 ? "YES" : "NO") << "\n";
    }
    return 0;
}

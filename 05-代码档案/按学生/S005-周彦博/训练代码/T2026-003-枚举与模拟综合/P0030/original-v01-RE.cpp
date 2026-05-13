#include <bits/stdc++.h>

using namespace std;

int n, a[1005], b[200005], cnt, t;
int main(){
    cin >> t;
    while(t--){
        cnt = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++){
            for (int j = i + 1; j <= n; j++){
                if (i + j == a[i] * a[j]) {
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
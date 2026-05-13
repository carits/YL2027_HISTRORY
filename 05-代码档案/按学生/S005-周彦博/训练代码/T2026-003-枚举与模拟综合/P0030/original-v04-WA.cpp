#include <bits/stdc++.h>
 
using namespace std;
 
int n, a[100005], b[200005], cnt, t;
int main(){
    cin >> t;
    while(t--){
        cnt = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++){
            if ((2 * i + 1) % a[i] == 0){    
                for (int j = i + 1; j <= n; j += a[i]){
                    if (i + j == a[i] * a[j]) {
                        cnt++;
                    }
                }
            }
            else{
                for (int j = i + 1 + a[i]-(2 * i + 1) % a[i]; j <= n; j += a[i]){
                    if (i + j == a[i] * a[j]) {
                        cnt++;
                    }
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
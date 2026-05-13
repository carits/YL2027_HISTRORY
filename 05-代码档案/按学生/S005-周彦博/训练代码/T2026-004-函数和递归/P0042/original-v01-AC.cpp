#include <iostream>
using namespace std;
int t, n;
int main(){	
    cin >> t;
    while(t--){
        int ans = 3;
        cin >> n;
        for (int i = 1; i <= n; i++){
            ans -= 1;
            ans *= 2;
        }
        cout << ans << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define itn int
#define nit int
#define nti int
#define tin int
#define tni int
#define int long long
#define fors(t, x, p) for(int t = x; t <= p; t++)

using namespace std;

nti t;
signed main(){
    IOS
	cin >> t;
    while(t--){
        int a[100005], k;
        cin >> a[1] >> k;
        if (k <= 19){
            for (int i = 2; i <= k; i++){
                int minn = 1e9, maxn = -1e9;
                a[i] = a[i - 1];
                while (a[i - 1] > 0){
    	            minn = min(minn, a[i - 1] % 10);
    	            maxn = max(maxn, a[i - 1] % 10);
    	            a[i - 1] /= 10;
                }
                a[i] += maxn * minn;
            }
            cout << a[k] << "\n";
        }
        else{
            for (int i = 2; i <= 19; i++){
                int minn = 1e9, maxn = -1e9;
                a[i] = a[i - 1];
                while (a[i - 1] > 0){
    	            minn = min(minn, a[i - 1] % 10);
    	            maxn = max(maxn, a[i - 1] % 10);
    	            a[i - 1] /= 10;
                }
                a[i] += maxn * minn;
            }
            cout << a[19] << '\n';
        }
    }
    return 0;
}
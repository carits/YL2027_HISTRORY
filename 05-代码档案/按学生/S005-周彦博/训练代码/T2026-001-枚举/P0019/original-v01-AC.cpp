#include <bits/stdc++.h>
using namespace std;
int n, t, a[100005], maxn;
int main(){
    cin >> n >> t;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1, j = n; i < j;){
        if (a[i] + a[j] > t) j--;
        else {
            maxn = max(maxn, a[i] + a[j]);
            i++;
        }
    }
    cout << maxn;
    return 0;
}
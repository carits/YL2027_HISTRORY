#include <bits/stdc++.h>
using namespace std;
int n, k, a[100005];
bool check (int x){
    if (k == 1){
        int maxn = 0;
        for (int i = 1; i <= n; i++){
            if (a[i] > maxn) maxn = a[i];
        }
        return maxn <= x;
    }
    long long cnt = 0;
    for (int i = 1; i <= n; i++){
        int b = a[i] - x;
        if (b >= 1) cnt += (b + k - 2) / (k - 1);
    }
    return cnt <= x;
}
int ef (int l, int r){
    while (l < r){
        int mid = (l + r) / 2;
         if (check(mid)){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    return l;
}
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> k;
    cout << ef(1, 1e9);
    return 0;
}
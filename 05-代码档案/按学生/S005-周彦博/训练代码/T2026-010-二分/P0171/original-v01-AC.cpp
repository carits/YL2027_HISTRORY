#include <bits/stdc++.h>
using namespace std;
long long n, m, a[1000005];
bool check(int x){
    long long cnt = 0;
    for (int i = 1; i <= n; i++){
        if (a[i] < x) continue;
        cnt += a[i] - x;
    }
    return cnt >= m; 
}
int ef (int l, int r){
    while (l < r){
        int mid = (l + r + 1) / 2;
         if (check(mid)){
            l = mid;
        }
        else{
            r = mid - 1;
        }
    }
    return l;
}
int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << ef(1, 1e9);
    return 0;
}
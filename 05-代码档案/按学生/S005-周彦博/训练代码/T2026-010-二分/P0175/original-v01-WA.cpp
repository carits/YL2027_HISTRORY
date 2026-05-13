#include <bits/stdc++.h>
using namespace std;
long long n, k, a[100005];
bool check (int b){
  long long cnt = 0;
    for (int i = 1; i <= n; i++){
        cnt += a[i] / b;
    }
    return cnt >= k;
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
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << ef(1, 100000000);
    return 0;
}
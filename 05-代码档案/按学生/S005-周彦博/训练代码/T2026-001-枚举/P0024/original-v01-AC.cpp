#include <bits/stdc++.h>
using namespace std;
int n, k, sum, cnt;
int main(){
    cin >> n >> k;
    int sj = 240 - k;
    for(int i = 1; i <= n; i++){
        if (sum + i * 5 > sj) break;
        sum += i * 5;
        cnt++;
    }
    cout << cnt;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int n, cnt;
int main(){
    cin >> n;
    for(int i = 100; i <= 999; i++) if (i % 10 + i / 10 % 10 + i / 100 % 10 == n) cnt++;
    cout << cnt;
    return 0;
}
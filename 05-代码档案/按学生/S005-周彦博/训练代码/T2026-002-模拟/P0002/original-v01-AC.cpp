#include <bits/stdc++.h>
using namespace std;
int a[15], b, cnt;
int main(){
    for (int i = 1; i <= 10; i++) cin >> a[i];
    cin >> b;
    for (int i = 1; i <= 10; i++){
        if (b + 30 >= a[i])cnt++;
    }
    cout << cnt;
    return 0;
}
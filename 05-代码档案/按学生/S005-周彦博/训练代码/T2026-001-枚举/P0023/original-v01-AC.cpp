#include <bits/stdc++.h>
using namespace std;
int n, ans;
int main(){
    cin >> n;
    for (int i = n + 1; i <= 9999; i++){
        int g = i % 10, s = i / 10 % 10, b = i / 100 % 10, q = i / 1000;
        if (g != s && g != b && g != q && s != b && s != q && b != q){
            cout << i;
            return 0;
        }
    }
    return 0;
}
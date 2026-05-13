#include <bits/stdc++.h>
using namespace std;
int k, r;
int main(){
    cin >> k >> r;
    for (int i = 1; i <= 9; i++){
        if (k * i % 10 == r || k * i % 10 == 0){
            cout << i;
            return 0;
        }
    }
    cout << 10;
    return 0;
}
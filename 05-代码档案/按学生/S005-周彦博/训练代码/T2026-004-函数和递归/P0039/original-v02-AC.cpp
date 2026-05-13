#include <bits/stdc++.h>
using namespace std;
string x, y;
int n;
int main(){
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++){
        if (y[i] > x[i]){
            cout << -1;
            return 0;
        }
    }
    for(int i = 0; i < n; i++){
        if (y[i] == x[i]) cout << x[i];
        if (y[i] < x[i]) cout << y[i];
    }
    return 0;
}
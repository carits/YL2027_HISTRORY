#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, r;
    cin >> k >> r;
    for(int i = 1; ; i++){
        int x = k * i % 10;
        if(x == 0 || x == r){
            cout << i << "\n";
            return 0;
        }
    }
}

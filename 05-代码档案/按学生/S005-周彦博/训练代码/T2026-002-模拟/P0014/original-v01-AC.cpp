#include <bits/stdc++.h>
using namespace std;
int n, k;
bool a[100005];
int main(){
    cin >> n >> k;
    for (int i = 1; i <= k; i++){
        for (int j = i; j <= n; j += i){
            if(a[j]) a[j] = 0;
            else a[j] = 1;
        }
    }
    for (int i = 1; i <= n; i++) if (a[i]) cout << i << ' ';
    return 0;
}
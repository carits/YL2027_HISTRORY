#include<iostream>
#include<cstring>
#include<vector>
#include<map>
using namespace std;
using LL = long long;

int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            for(int j = 2; j * j <= x; j++){
                if (x % j == 0){
                    int c = 0;
                    while(x % j == 0) x /= j, c += 1;
                    mp[j] += c;
                }
            }
            if (x > 1) mp[x] += 1;
        }
        int ans = 0, remain = 0;
        for(auto [x, y] : mp){
            ans += y / 2;
            remain += y % 2;
        }
        cout << ans + remain / 3 << '\n';
    }

}
#include <bits/stdc++.h>
using namespace std;
int mp[10] = {0,1,5,-1,-1,2,-1,-1,8,-1};
bool good(int h, int m, int H, int M){
    int a[4] = {h / 10, h % 10, m / 10, m % 10};
    for(int x: a) if(mp[x] == -1) return false;
    int nh = mp[a[3]] * 10 + mp[a[2]];
    int nm = mp[a[1]] * 10 + mp[a[0]];
    return nh < H && nm < M;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        int H, M, h, m;
        char c;
        cin >> H >> M >> h >> c >> m;
        while(!good(h, m, H, M)){
            m++;
            if(m == M) m = 0, h = (h + 1) % H;
        }
        cout << setw(2) << setfill('0') << h << ":"
             << setw(2) << setfill('0') << m << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int mp[10];

bool valid(int h, int m, int H, int M) {
    int h1 = h / 10, h2 = h % 10;
    int m1 = m / 10, m2 = m % 10;

    if (mp[h1] == -1 || mp[h2] == -1 || mp[m1] == -1 || mp[m2] == -1) {
        return false;
    }

    int rh = mp[m2] * 10 + mp[m1];
    int rm = mp[h2] * 10 + mp[h1];

    return rh < H && rm < M;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fill(mp, mp + 10, -1);
    mp[0] = 0;
    mp[1] = 1;
    mp[2] = 5;
    mp[5] = 2;
    mp[8] = 8;

    int T;
    cin >> T;
    while (T--) {
        int H, M;
        string s;
        cin >> H >> M >> s;

        int h = stoi(s.substr(0, 2));
        int m = stoi(s.substr(3, 2));

        while (!valid(h, m, H, M)) {
            m++;
            if (m == M) {
                m = 0;
                h++;
                if (h == H) h = 0;
            }
        }

        cout << setw(2) << setfill('0') << h << ':'
             << setw(2) << setfill('0') << m << '\n';
    }

    return 0;
}

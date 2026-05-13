#include <bits/stdc++.h>
using namespace std;
const int mm[10] = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};
bool iv(int d) 
{
    return mm[d] != -1;
}
int gm(int num) 
{
    int d1 = num / 10;
    int d2 = num % 10;
    int m1 = mm[d1];
    int m2 = mm[d2];
    return m2 * 10 + m1;
}
int main() 
{
    int T;
    cin >> T;
    while (T--)
    {
        int h, m;
        cin >> h >> m;
        int H, M;
        char c;
        cin >> H >> c >> M;
        int st = H * 60 + M;
        int tpd = h * 60;
        for (int t = 0; t < tpd; t++)
        {
            int ct = (st + t) % tpd;
            int ch = ct / 60;
            int cm = ct % 60;
            int h1 = ch / 10, h2 = ch % 10;
            int m1 = cm / 10, m2 = cm % 10;
            if (!iv(h1) || !iv(h2) || !iv(m1) || !iv(m2)) 
                continue;
            int mh = gm(cm);
            int mm_ = gm(ch);
            if (mh < h && mm_ < m) 
            {
                printf("%02d:%02d\n", ch, cm);
                break;
            }
        }
    }
    return 0;
}
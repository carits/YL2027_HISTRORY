#include <bits/stdc++.h>
using namespace std;
const int refl[] = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};
int t, h, m, hh, mm;
bool ok(int ho, int mi) 
{
    string sh = to_string(ho);
    string sm = to_string(mi);
    if (sh.size() == 1) 
        sh = "0" + sh;
    if (sm.size() == 1) 
        sm = "0" + sm;
    for (int i = 0; i < sh.size(); ++i) 
    {
        if (refl[sh[i] - '0'] == -1) 
            return 0;
        sh[i] = '0' + refl[sh[i] - '0'];
    }
    for (int i = 0; i < sm.size(); ++i) 
    {
        if (refl[sm[i] - '0'] == -1) 
            return 0;
        sm[i] = '0' + refl[sm[i] - '0'];
    }
    reverse(sm.begin(), sm.end());
    reverse(sh.begin(), sh.end());
    stringstream sa(sm), sb(sh);
    sa >> ho;
    sb >> mi;
    return ho < h && mi < m;
}
int main() 
{
    scanf("%d", &t);
    while (t--) 
    {
        scanf("%d%d", &h, &m);
        scanf("%d:%d", &hh, &mm);
        while (1) 
        {
            if (mm == m) 
            {
                mm = 0;
                ++hh;
            }
            if (hh == h) 
            {
                hh = 0;
            }
            if (ok(hh, mm)) 
            {
                printf("%02d:%02d\n", hh, mm);
                break;
            }
            ++mm;
        }
    }
    return 0;
}
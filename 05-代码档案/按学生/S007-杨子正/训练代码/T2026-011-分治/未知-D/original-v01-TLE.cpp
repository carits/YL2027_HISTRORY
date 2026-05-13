#include <bits/stdc++.h>
using namespace std;
struct node
{
    int h, w, d;
} ;
int main()
{
    int n;
    cin >> n;
    vector<node> a(n + 5);
    for (int i = 1; i <= n; i++)
        cin >> a[i].h >> a[i].w >> a[i].d;
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
        {
            int hi = a[i].h, wi = a[i].w, di = a[i].d;
            int hj = a[j].h, wj = a[j].w, dj = a[j].d;
            swap(di, hi);
            if ((hi > hj && wi > wj && di > dj) || (hj > hi && wj > wi && dj > di))
            {
                cout << "Yes";
                return 0;
            }
            swap(di, hi);
            swap(dj, hj);
            if ((hi > hj && wi > wj && di > dj) || (hj > hi && wj > wi && dj > di))
            {
                cout << "Yes";
                return 0;
            }
            swap(di, hi);
            if ((hi > hj && wi > wj && di > dj) || (hj > hi && wj > wi && dj > di))
            {
                cout << "Yes";
                return 0;
            }
            swap(di, hi);
            swap(dj, hj);
        }
    cout << "No";
    return 0;
}
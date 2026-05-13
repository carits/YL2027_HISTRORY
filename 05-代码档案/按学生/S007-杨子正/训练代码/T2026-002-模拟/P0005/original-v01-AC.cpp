#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
struct node 
{
    string name;
    int face;
} a[N];
int main() 
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i].face >> a[i].name;
    int cur = 0;
    for (int i = 0; i < m; i++) 
    {
        int ai, s;
        cin >> ai >> s;
        if (ai == 0 && a[cur].face == 0) cur = (cur - s + n) % n;
        else if (ai == 0 && a[cur].face == 1) cur = (cur + s) % n;
        else if (ai == 1 && a[cur].face == 0) cur = (cur + s) % n;
        else if (ai == 1 && a[cur].face == 1) cur = (cur - s + n) % n;
    }
    cout << a[cur].name;
    return 0;
}
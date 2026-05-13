#include <bits/stdc++.h>
using namespace std;
const int O = 10005;
int o[O];
int main() 
{
    int n, k = 0;
    string s, t;
    cin >> n >> s >> t;
    string ss = s, tt = t;
    sort(ss.begin(), ss.end());
    sort(tt.begin(), tt.end());
    if (ss != tt) 
    {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) 
    {
        int j = i;
        while (j < n && s[j] != t[i]) j++;
        while (j > i) 
        {
            swap(s[j - 1], s[j]);
            o[k++] = j;
            j--;
        }
    }
    cout << k << endl;
    for (int i = 0; i < k; i++) 
        cout << o[i] << ' ';
    cout << endl;
    return 0;
}
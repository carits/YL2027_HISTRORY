#include <bits/stdc++.h>
using namespace std;

int y;
int main()
{
    cin >> y;
    for(int i = y + 1; i <= 9999; i ++)
    {
        int a = i / 1000, b = i % 1000 / 100, c = i % 100 / 10, d = i % 10;
        if(a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}
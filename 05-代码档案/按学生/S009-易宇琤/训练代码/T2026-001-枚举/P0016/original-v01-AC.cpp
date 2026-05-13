#include <bits/stdc++.h>
using namespace std;

int n;
int ans;
int main()
{
    cin >> n;
    for(int i = 1; i <= 9; i ++)
        for(int j = 0; j <= 9; j ++)
            for(int k = 0; k <= 9; k ++)
                if(i + j + k == n)
                    ans ++;
    cout << ans;
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int n;
char a, b, c;

void dfs(int x, char a, char b, char c)
{
    if(x == 0)
    {
        return ;
    }
    dfs(x-1, a, c, b);
    cout << x << ":" << a << "->" << c << "\n";
    dfs(x-1, b, a, c);
}

int main()
{
    cin >> n >> a >> b >> c;
    dfs(n, a, b, c);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int id , s;
    long long t;
};
node b[200050];
int a[200005];
bool cmp1 (node a , node b)
{
        
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t , n , m , h , v;
    cin >> t;
    while (t--)
    {
        int cnt=0;
        cin >> n >> m >> h;
        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=m;j++)
            {
                cin >> a[j];
            }
            sort (a+1 , a+m+1 , cmp);
        }
        
    }
    return 0;
}
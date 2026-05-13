#include <bits/stdc++.h>
using namespace std;
struct node 
{
    int x , y;    
};
bool cmp (node a , node b)
{
    if (a.y!=b.y)  return a.y>b.y;
    return a.x<b.x;
}
node a[5005];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i].x >> a[i].y;
    }
    sort(a+1,a+n+1,cmp);
    int c=m*1.5;
    int v= a[c].y , cnt=0;
    for (int i=1;i<=n;i++)
    {
        if (a[i].y>=v)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout << v << " " << cnt << "\n";
    for (int i=1;i<=n;i++)
    {
        if (a[i].y>=v)
        {
            cout << a[i].x << " " << a[i].y << "\n";
        }
        else
        {
            break;
        }
    }
    return 0;
}
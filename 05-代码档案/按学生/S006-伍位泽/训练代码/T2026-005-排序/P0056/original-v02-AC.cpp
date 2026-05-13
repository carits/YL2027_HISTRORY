#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x , y;
};
bool cmp (node a , node b)
{
    if (a.x!=b.x) return a.x<b.x;
    return a.y<b.y;
}
node v[100005];
int main ( )
{
    int n;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        cin >> v[i].x >> v[i].y;
    }
    sort (v+1 , v+n+1 , cmp);
    for (int i=1;i<=n;i++)
    {
        cout << v[i].x << " " << v[i].y << "\n";
    }
   return 0;
}
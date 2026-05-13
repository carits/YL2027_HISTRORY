#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x , y;
};
bool cmp (node a , node b)
{
    return a.x<b.x;
}
node v[100005];
int a[1000005];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie (0);
    int n;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        cin >> v[i].x;
        a[i]=v[i].x;
    }
    sort (v+1 , v+n+1 , cmp);
    for (int i=1;i<=n;i++)
    {
        v[v[i].x].y=i;
    }
   for (int i=1;i<=n;i++)
   {
       cout << v[a[i]].y << " ";
   }
   return 0;
}
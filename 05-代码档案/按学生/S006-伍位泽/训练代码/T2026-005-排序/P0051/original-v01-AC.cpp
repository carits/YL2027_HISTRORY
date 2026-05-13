#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x , y;
};
bool cmp (node a , node b)
{
    return a.y<b.y;
}
node v[5005];
int main ( )
{
    int n , s , a , b;
    cin >> n >> s >> a >> b;
    int cnt=0;
    for (int i=1;i<=n;i++)
    {
        cin >> v[i].x >> v[i].y;
    }
    sort (v+1 , v+n+1 , cmp);
    for (int i=1;i<=n;i++)
    {
        if (v[i].y>s)
        {
            break;
        }
        if (a+b>=v[i].x)
        {
            cnt++;
            s-=v[i].y;
        }
    }
    cout << cnt;
   return 0;
}
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int a , b;
};
bool cmp (node a , node b)
{
    return a.a<b.a;
}
node v[100005];
int main ( )
{
    int n;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        cin >> v[i].a;
        v[i].b=i;
    }
    sort (v+1 , v+n+1 , cmp);
    for (int i=1;i<=n;i++)
    {
        cout << v[i].b << " ";
    }
   return 0;
}
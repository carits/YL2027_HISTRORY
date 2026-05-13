#include <bits/stdc++.h>
using namespace std;
struct node
{
    int a , b;
};
node a[105] , b[105] , c[105];
bool cmp (node a , node b)
{
    return a.a>b.a;
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie (0);
    int n , m;
    cin >> n >> m;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i].a >> b[i].a >> c[i].a;
        a[i].b=b[i].b=c[i].b=i;
    }
    sort (a+1 , a+n+1 , cmp);
    for (int i=1;i<=n;i++)
    {
        cout << a[i].b << " ";
    }   
    cout << "\n";
    sort (b+1 , b+n+1 , cmp);
    for (int i=1;i<=n;i++)
    {
        cout << b[i].b << " ";
    }   
    cout << "\n";
    sort (c+1 , c+n+1 , cmp);
    for (int i=1;i<=n;i++)
    {
        cout << c[i].b << " ";
    }   
   return 0;
}
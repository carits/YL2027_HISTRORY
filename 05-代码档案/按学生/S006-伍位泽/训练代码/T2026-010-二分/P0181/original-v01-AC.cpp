#include <bits/stdc++.h>
using namespace std;
int a[105] , b[105];
int q , n , k , v;
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
    cin >> q;
    while (q--)
    {
      cin >> n >> k;
      memset (b , 0 , sizeof (b));
      for (int i=1;i<=n;i++)
      {
        cin >> a[i];
      }
      sort (a+1 , a+n+1);
      for (int i=1;i<=n;i++)
      {
        b[a[i]]=i;
      }
      int p=a[1];
      while (k--)
      {
        cin >> v;
        while (v>=p)
        {
          int pos=upper_bound (a+1 , a+n+1 , v)-a;
          v-=b[a[pos-1]];
        }
        cout << v << " ";
      }
      cout << "\n";
    }
  return 0;
}
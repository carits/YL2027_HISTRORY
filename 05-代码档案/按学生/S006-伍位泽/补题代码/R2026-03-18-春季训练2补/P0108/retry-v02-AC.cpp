#include <bits/stdc++.h>
using namespace std;
const int M=1e6;
bool a[M+5];
int main ( )
{
    for (int i=2;i<=M;i++)
    {
        long long v=1 , sum=1 , cnt=0;
        while (sum<=M)
        {
            if (cnt>=2)
            {
                a[sum]=1;
            }
            v*=i;
            sum+=v; 
            cnt++;
        }
    }
    int t , n;
    cin >> t;
    while (t--)
    {
      cin >> n;
      if (a[n]==0)
      {
          cout << "NO\n";
      }  
      else
      {
          cout << "YES\n";
      }
    }
    return 0;
}

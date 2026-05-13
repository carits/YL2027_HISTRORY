#include <bits/stdc++.h>
#define int long long
using namespace std;
int l[100009];
int r[100009];
int vis[1000009];
signed main()
{
  int n, m,q;
  string a,b;
  cin>>n>>m>>q>>a>>b;
  int i=0;
  while(1)
  {
        if(a.find(b,i)>n)
        {
          break;
        }
        i = a.find(b, i);
        i+=1;
        vis[i]=1;
        
  }
  for (int i = 1; i <= n; i++)
  {
        vis[i]=vis[i-1]+vis[i];
  }
  while(q--)
  {
        cin>>l[i]>>r[i];
        if (r - l + 1 < m)
        {
            cout << 0<<endl;
        } 
        else
        {
            cout <<vis[r-m+1]-vis[l-1]<<endl; 
        }
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
struct node
{
  int h , w , d;
};
node s[200005];
int n;
bool cmp (node x , node y)
{
  if (x.h!=y.h) return x.h<y.h;
  if (x.w!=y.w) return x.w>y.w;
  return x.d>y.d;
}
bool cmp1 (node x , node y)
{
  return x.w<y.w;
}
bool F (int x , int y)
{
  if (x==y) return 0;
  int mid=(x+y)/2;
  if (F (x , mid)||F (mid+1 , y)) return 1;
  sort (s+x , s+mid+1 , cmp1);
  sort (s+mid+1 , s+y+1 , cmp1);
  int pos=x , minn=1e9;
  for (int i=mid+1;i<=y;i++)
  {
    while (s[pos].w<s[i].w&&pos<=mid)
    {
      minn=min (minn , s[pos].d);
      pos++;
    }
    if (s[i].d>minn)
    {
      return 1;
    }
  }
  return 0;
}
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
   cin >> n;
   for (int i=1;i<=n;i++)
   {
     int tmp[4];
     cin >> tmp[1] >> tmp[2] >> tmp[3];
     sort (tmp+1 , tmp+4);
     s[i].h=tmp[3];
     s[i].w=tmp[2];
     s[i].d=tmp[1];
   }
   sort (s+1 , s+n+1 , cmp);
   if (F (1 , n)==1)
   {
     cout << "Yes";
   }
   else
   {
     cout << "No";
   }
  return 0;
 } 
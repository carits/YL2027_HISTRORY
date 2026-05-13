#include<bits/stdc++.h>
 using namespace std;
 int n, k, a[150005], pre[150005];
 int main()
{
 cin >> n >> k;
 for(int i = 1; i <= n; i++)
 {
  cin >> a[i];
 }
  for(int i = 1; i <= n; i++)
 {
  pre[i] = pre[i - 1] + a[i];
 }
  int mini = 1e9, id;
 for(int i = 1; i <= n - k + 1; i++)
 {
  if(mini > pre[i + k - 1] - pre[i - 1])
  {
   mini = pre[i + k - 1] - pre[i - 1];
   id = i;
  }
 }
  cout << id;
 return 0;
}
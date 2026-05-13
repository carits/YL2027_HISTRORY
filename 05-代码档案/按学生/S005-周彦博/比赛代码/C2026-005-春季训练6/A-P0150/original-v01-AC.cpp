#include <bits/stdc++.h>
using namespace std;
int t, n, a[200005], cnt, ans;
int main(){
 cin >> t;
 while(t--){ 
  cin >> n;
  for(int i = 1; i <= n ; i++){
   cin >> a[i];
   ans += a[i];
  }
  if(ans % n != 0) cout << -1 << endl; 
  else{
   ans /= n; 
   for(int i = 1; i <= n; i++) if(ans < a[i]) cnt++; 
   cout << cnt << endl;
  }
  cnt = 0, ans = 0; 
 }
 return 0;
}
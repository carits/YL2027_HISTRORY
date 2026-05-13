#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5 + 5;
int x, t;
void so(){
 cin >> x;
 if (x % 10 == 9){
  cout << "NO\n";
  return;
 }
    x/=10;
 while (x > 10){
  if (x % 10 == 0) {
   cout << "NO" << endl;
   return;
  }
  x /= 10;
 }
 if (x != 1) cout << "NO\n";
 else cout << "YES\n";
}
signed main(){
    cin >> t;
 while (t--) so();
 return 0;
}